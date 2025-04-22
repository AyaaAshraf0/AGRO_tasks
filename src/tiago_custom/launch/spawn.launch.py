import os
from os import environ, pathsep
from ament_index_python.packages import get_package_prefix
from launch import LaunchDescription
from launch.actions import SetEnvironmentVariable, SetLaunchConfiguration, IncludeLaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_pal.include_utils import include_scoped_launch_py_description


def generate_launch_description():

    ld = LaunchDescription()

    declare_actions(ld)

    return ld


def declare_actions(launch_description: LaunchDescription):
    # Set use_sim_time to True
    set_sim_time = SetLaunchConfiguration("use_sim_time", "True")
    launch_description.add_action(set_sim_time)
    



    # Set up paths for the robot models
    robot_name = 'tiago'
    packages = ['tiago_description', 'pmb2_description', 'pal_hey5_description', 'pal_gripper_description',
                'pal_robotiq_description', 'omni_base_description']

    model_path = get_model_paths(packages)
    
    world_file =os.path.join(FindPackageShare("tiago_custom").find("tiago_custom"),"worlds","agricultural_world.sdf")
   
    rviz_file =os.path.join(FindPackageShare("tiago_custom").find("tiago_custom"),"rviz","tiago.rviz")

    gazebo_model_path_env_var = SetEnvironmentVariable(
        'GAZEBO_MODEL_PATH', model_path
    )

    gazebo = include_scoped_launch_py_description(
        pkg_name='gazebo_ros',
        paths=['launch', 'gazebo.launch.py'],
        env_vars=[gazebo_model_path_env_var],
        launch_arguments={
            "model_paths": packages,
            "world": world_file,
            
        })

    launch_description.add_action(gazebo)
    

    # Spawn Robot in Gazebo
    robot_spawn = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        arguments=[
            "-topic",
            "robot_description",
            "-entity",
            robot_name,
            '-x','-22',
            '-y','-22',
            '-z','0'
        ],
        output="screen",
    )

    launch_description.add_action(robot_spawn)
    
    
    # Robot State Publisher
    rsp_launch = os.path.join(FindPackageShare("tiago_description").find("tiago_description"), "launch", "robot_state_publisher.launch.py")
    robot_state_publisher = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(rsp_launch)
    )
    launch_description.add_action(robot_state_publisher)


    
    # rviz
    rviz = Node(
        package="rviz2",
        executable='rviz2',
        output = 'screen',
        arguments=['-d', rviz_file]
    )
    
    launch_description.add_action(rviz)

    # Launch Controllers
    default_controllers = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(FindPackageShare('tiago_controller_configuration').find('tiago_controller_configuration'),
                         'launch', 'default_controllers.launch.py')
        )
    )

    launch_description.add_action(default_controllers)
    
    # Twist_bridge
    bridge_Twist = Node(
        package="tiago_custom",
        executable='bridge_cmd',
        output = 'screen',
    )
    
    launch_description.add_action(bridge_Twist)
    
    # Launch MoveIt
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(FindPackageShare('tiago_moveit_config').find('tiago_moveit_config'),
                         'launch', 'move_group.launch.py')
        )
    )
    launch_description.add_action(moveit_launch)

    
    return

   


def get_model_paths(packages_names):
    model_paths = ""
    for package_name in packages_names:
        if model_paths != "":
            model_paths += pathsep

        package_path = get_package_prefix(package_name)
        model_path = os.path.join(package_path, "share")

        model_paths += model_path

    if 'GAZEBO_MODEL_PATH' in environ:
        model_paths += pathsep + environ['GAZEBO_MODEL_PATH']

    return model_paths