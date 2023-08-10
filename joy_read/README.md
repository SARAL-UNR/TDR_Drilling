#TDR_DRILLING

Steps:
1. Add this to your catkin workspace
2. run catkin_make
3. source devel/setup.bash

Test:
roslaunch read_joy read_joy.launch

Run on pioneer:
roslaunch read_joy tdr_driller.launch

#DEPENDENCIES:
ros-noetic
ros-noetic-joy
ros-noetic-sensor_msgs
p2os
