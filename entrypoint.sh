#!/bin/bash

# this tells to shell to exit if any command returns a non zero exit status 
# non-zero error is an indication of failure in Unix systems
set -e

# this two commands will source the overlay and underlay
# such that we can run our package 
source /opt/ros/humble/setup.bash
source /app/Agro2/install/setup.bash
source /usr/share/gazebo/setup.sh 
export TURTLEBOT3_MODEL=burger
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/app/Agro2/src/custom_worlds/models/model_editor_models
export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:/app/Agro2/src


# This means that we are doing everything in this  entrypoint.sh script, 
# then in the same shell, we will run the command the user passes in on the command line.
# (if the use passes a command)
exec "$@"
