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
    rviz_config_file = os.path.join(fer_moveit_pkg,'config','moveit.rviz')
    # urdf_file= os.path.join(fer_moveit_pkg,'config','fer.urdf')
    # with open(urdf_file, 'r') as urdf_file_handle:
    #     robot_description_content = urdf_file_handle.read()

    # # Declare launch arguments
    # declared_arguments = [
    #     DeclareLaunchArgument('x', default_value='0', description='X position'),
    #     DeclareLaunchArgument('y', default_value='0', description='Y position'),
    #     DeclareLaunchArgument('z', default_value='0.5', description='Z position'),
    # ]

    moveit_config = (
        MoveItConfigsBuilder("fer", package_name= "fer_moveit")
        .robot_description(file_path="config/fer.urdf.xacro")
        .robot_description_semantic(file_path="config/fer.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .planning_pipelines(pipelines=["ompl","chomp"])
        .to_moveit_configs()
    )
    


    # Load controllers (Fix: Specify controller names)
    load_controllers = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[moveit_config.robot_description, ros2_controllers_yaml],
        output='screen'
        
    )
    
    joint_state_broadcaster = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
        output='screen'
        
    )
    
    arm_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["panda_arm_controller", "--controller-manager", "/controller_manager"],
        output='screen'
        
    )
    
    hand_controller = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["hand_controller", "--controller-manager", "/controller_manager"],
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
    
    moveit_rviz = Node(
        package="rviz2",
        executable= "rviz2",
        name= "rviz2",
        output= "screen",
        arguments= ["-d", rviz_config_file],
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.planning_pipelines,
            moveit_config.robot_description_kinematics,
        ]
    )
    
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[moveit_config.robot_description]
    )

    return LaunchDescription(
        # declared_arguments + 
        [
        # gazebo,
        # spawn_robot,
        # robot_state_publisher,
        load_controllers,
        joint_state_broadcaster,
        # joint_state_publisher,
        arm_controller,
        hand_controller,
        robot_state_publisher,
        move_group,
        moveit_rviz,
        
    ])