import rclpy
from rclpy.node import Node

from rclpy.action import ActionServer
from actions.action import ReachWall

from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan


def callback(goal):
    global node 
    global vel_pub
    
    node.get_logger().info("Received goal request: {0}".format(goal.request))
    goal_msg = goal.request.target_distance
    node.get_logger().info("Received distance to wall: {0}".format(goal_msg))
    feedback_msg = ReachWall.Feedback()
    result_msg = ReachWall.Result()
    robot_vel = Twist()
    
    while distance_to_goal >= goal_msg:
        robot_vel.linear.x = 0.2
        feedback_msg.remaining_distance = distance_to_goal
        goal.publish_feedback(feedback_msg)
        vel_pub.publish(robot_vel)
        print(distance_to_goal)
    robot_vel.linear.x = 0
    vel_pub.publish(robot_vel)
    result_msg.reached = True
    goal.succeed()
    return result_msg
    

def main(args=None):
    global node
    global vel_pub
    
    rclpy.init(args=args)
    
    node = rclpy.create_node('reach_wall_server')
    action_server = ActionServer(node, ReachWall, 'reach_wall', callback)
    
    vel_pub = node.create_publisher(Twist,"/cmd_vel",10)