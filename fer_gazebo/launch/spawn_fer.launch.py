import os
import launch
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, RegisterEventHandler
from launch.substitutions import Command, FindExecutable, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder
from launch.event_handlers import OnProcessStart

def generate_launch_description():
    # Paths
    fer_description_pkg = get_package_share_directory('franka_description')
    fer_moveit_pkg = get_package_share_directory("fer_moveit")
    
    
    urdf_file= os.path.join(fer_description_pkg,'robots','fer','fer.urdf.xacro')
    robot_description_content = Command(['xacro ',urdf_file])
    ros2_controllers_yaml =  os.path.join(fer_moveit_pkg,'config','ros2_controllers.yaml')
    rviz_config_file = os.path.join(fer_moveit_pkg,'config','moveit.rviz')
    
    moveit_config = (
        MoveItConfigsBuilder("fer", package_name= "fer_moveit")
        .robot_description(file_path="config/fer.urdf.xacro")
        .robot_description_semantic(file_path="config/fer.srdf")
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .planning_scene_monitor(publish_robot_description=True, publish_robot_description_semantic=True)
        .planning_pipelines(pipelines=["ompl","chomp"])
        .to_moveit_configs()
    )
    
      # Gazebo launch
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')
        ),
        launch_arguments={'use_sim_time': 'true', 'gui': 'true', 'paused': 'true'}.items()
    )
 # Robot state publisher (Fix: Use Xacro conversion)
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[moveit_config.robot_description]
    )
    
    # Spawn the robot in Gazebo
    spawn_robot = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=[
            '-entity', 'fer',
            '-topic', 'robot_description',
     
        ],
        output='screen'
    )
    
    # Load controllers (Fix: Specify controller names)
    load_controllers = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[moveit_config.robot_description, ros2_controllers_yaml],
        output='screen',
        remappings=[
            ("~/robot_description", "/robot_description"),
        ],
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
    
    use_sim_time = {"use_sim_time": True}
    config_dict = moveit_config.to_dict()
    config_dict.update(use_sim_time)
         
    # MoveIt launch files
    move_group = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output = "screen",
        parameters=[config_dict],
        arguments=["--ros-args","--log-level","info"]
    )
    
    delay_joint_state_broadcaster = RegisterEventHandler(
        OnProcessStart(
            target_action= spawn_robot,
            on_start=[joint_state_broadcaster]
        )
    )
    
    delay_arm_controller = RegisterEventHandler(
        OnProcessStart(
            target_action= spawn_robot,
            on_start=[arm_controller]
        )
    )
    
    delay_hand_controller = RegisterEventHandler(
        OnProcessStart(
            target_action= spawn_robot,
            on_start=[hand_controller]
        )
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
    
    delay_rviz= RegisterEventHandler(
        OnProcessStart(
            target_action= robot_state_publisher,
            on_start=[moveit_rviz]
        )
    )
      
   
    
    return LaunchDescription([
        gazebo,
        spawn_robot,
        robot_state_publisher,
        load_controllers,
        
        move_group,
        delay_joint_state_broadcaster,
        delay_arm_controller,
        delay_hand_controller,
        delay_rviz
        
        ]
    )