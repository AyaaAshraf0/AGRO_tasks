import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, ExecuteProcess
from launch.substitutions import Command, FindExecutable, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    # Paths
    fer_description_pkg = get_package_share_directory('franka_description')
    fer_moveit_pkg = get_package_share_directory("fer_moveit")
    ros2_controllers_yaml =  os.path.join(fer_moveit_pkg,'config','ros2_controllers.yaml')
    
    urdf_file= os.path.join(fer_moveit_pkg,'config','fer.urdf')
    with open(urdf_file, 'r') as urdf_file_handle:
        robot_description_content = urdf_file_handle.read()

    # Declare launch arguments
    declared_arguments = [
        DeclareLaunchArgument('x', default_value='0', description='X position'),
        DeclareLaunchArgument('y', default_value='0', description='Y position'),
        DeclareLaunchArgument('z', default_value='0.5', description='Z position'),
    ]

    moveit_config = (
        MoveItConfigsBuilder("fer", package_name= "fer_moveit")
        .robot_description(file_path="config/fer.urdf.xacro")
        .robot_description_semantic(file_path="config/fer.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .planning_pipelines(pipelines=["ompl"])
        .to_moveit_configs()
    )
    
    # Gazebo launch
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')
        ),
        launch_arguments={'use_sim_time': 'true', 'gui': 'true', 'paused': 'true'}.items()
    )

    # Spawn the robot in Gazebo
    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'fer',
            '-topic', 'robot_description',
            '-x', LaunchConfiguration('x'),
            '-y', LaunchConfiguration('y'),
            '-z', LaunchConfiguration('z'),
        ],
        output='screen'
    )

    # Load controllers (Fix: Specify controller names)
    load_controllers = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[moveit_config.robot_description, ros2_controllers_yaml],
        output='screen'
        
    )
        
     # Joint state publisher
    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        output='screen'
    )
    
    # Robot state publisher (Fix: Use Xacro conversion)
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description_content}],
        output='screen'
    )
    
    joint_state_broadcaster = Node(
        package="controller_manager",
        executable="spawner",
        parameters=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
        output='screen'
        
    )

    arm_controller = Node(
        package="controller_manager",
        executable="spawner",
        parameters=["panda_arm_controller", "--controller-manager", "/controller_manager"],
        output='screen'
        
    )
    
    hand_controller = Node(
        package="controller_manager",
        executable="spawner",
        parameters=["hand_controller", "--controller-manager", "/controller_manager"],
        output='screen'
        
    )
     
    # MoveIt launch files
    move_group = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output = "screen",
        parameters=[moveit_config.to_dict()],
        arguments=["--ros-args","--log-level","info"]
    )
    
    moveit_rviz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(fer_moveit_pkg, 'launch', 'moveit_rviz.launch.py')
        ),
    )

    return LaunchDescription(declared_arguments + [
        gazebo,
        spawn_robot,
        robot_state_publisher,
        load_controllers,
        joint_state_publisher,
        arm_controller,
        hand_controller,
        move_group,
        moveit_rviz,
        
    ])