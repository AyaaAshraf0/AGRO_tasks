# this is the image of ROS2 that is pulled (downloaded an included in the local image)
FROM osrf/ros:humble-desktop

# we are using bash
SHELL ["/bin/bash", "-c"]

# here we specify the work directory inside of our container, everything will be placed inside
WORKDIR /app

# Install packages.
RUN apt-get update && apt-get install -y \
    ros-humble-gazebo-* \
    ros-humble-ros2-controllers \
    python-is-python3 \
    nano \
    less \
    xterm \
    mesa-utils \
    x11-utils 


RUN apt update && apt install -y \
    software-properties-common && \
    add-apt-repository universe && \
    apt update && apt install -y \
    python3-rosdep \
    ros-humble-moveit \
    python3-colcon-common-extensions && \
    rosdep update
    


# here, we are copying "src" folder from our workspace folder to the newly created folder 
# ws_pub_sub/src inside of our container. That is, we are creating "ws_pub_sub" folder 
# int the container and another subfolder inside of that folder called "src"
# the path in the container is /app/ws_pub_sub/src
COPY src Agro2/src

# here we are starting from /app and moving to /app/ws_pub_sub and we are sourcing the 
# base environment that is now inside of our container and we are building the package
RUN cd Agro2 && \
    rosdep install --from-paths src --ignore-src -r -y || true

RUN cd Agro2 && \
    source /opt/ros/humble/setup.bash && \
    colcon build

# here, we are copying another file from our local computer to the root folder "/" (forward slash)
# inside of our container 
# see entrypoint.sh file for more details    
COPY entrypoint.sh /

# here we are specifying the entry point file
ENTRYPOINT ["/entrypoint.sh"]
# after we run the package the command "bash" will be executed, and 
# we will enter a local bash terminal inside of our container
CMD ["bash"]
