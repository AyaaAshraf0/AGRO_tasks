# Mobile Robot Tasks - Internship

This repository contains mobile robot tasks performed during my internship, including navigation and manipulation simulations using different robots in an agricultural world.

## Projects Included

1. *Custom Worlds Package*: Contains custom world for agricultural environment, built for ROS2 and Gazebo.
2. *Navigation with Turtlebot3 Burger*: Implements navigation using the Turtlebot3 Burger in the agricultural world, including localization and path planning.
3. *Franka Panda Manipulator Simulation*: Simulation of the Franka Panda manipulator in a Gazebo environment with ROS2 control integration.
4. *Tiago Mobile Manipulator*: Integrates both navigation and manipulation tasks for the Tiago robot in the agricultural world.

## Requirements
Before running the project, make sure you have the following dependencies installed:

- ROS 2 Humble installed
- Gazebo classic.
- (Optional) Docker (if running using a container)

*To install Docker Engine*, I followed [this tutorial](https://aleksandarhaber.com/how-to-create-and-run-ros2-packages-in-docker-containers-from-scratch/)

## Installation
1. *Clone the repository* and initialize it as a ROS 2 workspace:
   ```bash
   git clone https://github.com/AyaaAshraf0/AGRO_tasks.git
   
## Usage
### Using Docker 
You can run the simulation environment and packages using Docker for a consistent and isolated setup.
1. Make sure you are inside Agro2
   ```bash
   cd /path/to/Agro2 
2. Build the Docker image:
   ```bash
   docker build -t ros2_gazebo .
3. Run the container with GUI support (for Gazebo/RViz):
   ```bash
   xhost +local:root
   ```
   ```bash
   docker run -it     --env DISPLAY=$DISPLAY     --env QT_X11_NO_MITSHM=1     --volume="/tmp/.X11-unix:/tmp/.X11-unix:rw"     --network host --name agro  ros2_gazebo:latest 
4. Make sure you are inside Agro2
   ```bash
   cd Agro2
5. To be able to use multiple termianls in the docker container run:
   ```bash 
   tmux


#### To launch the agricultural world with turtlebot3 burger

    ros2 launch custom_worlds agricultural.launch.py 
    
#### To launch the navigation for turtlebot3  

    ros2 run  rviz2 rviz2 -d /opt/ros/humble/share/nav2_bringup/rviz/nav2_default_view.rviz 
###

    ros2 launch my_nav2_bringup bringup.launch.py

#### To launch the agricultural world with TiaGo mobile manipulator 

    ros2 launch tiago_custom spawn.launch.py is_public_sim:=True
    
#### And to launch the navigation for it

    ros2 launch  nav2_bringup bringup_launch.py map:=src/my_nav2_bringup/maps/my_map.yaml params_file:=src/tiago_custom/config/Tiago_nav_params.yaml use_sim_time:=True

### And to stop the docker 

    docker stop agro
