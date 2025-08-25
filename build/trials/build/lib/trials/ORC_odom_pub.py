import rclpy
from nav_msgs.msg import Odometry

from rclpy.node import Node
from tf_transformations import euler_from_quaternion

pose = None

def callback(msg):
    global pose
    pose = msg.pose.pose
    
def main():
    
    global pose
    rclpy.init()
    
    node = rclpy.create_node("odom_subscriber")
    node.create_subscription(Odometry,'/odom',callback, 10)
    
    rate = node.create_rate(1)
    
    while rclpy.ok():
        rclpy.spin_once(node, timeout_sec=0.1)
        if pose is not None:
            x = pose.position.x 
            y = pose.position.y
            orientation_q = pose.orientation
            quaternion = (
                orientation_q.x,
                orientation_q.y,
                orientation_q.z,
                orientation_q.w
            )
            _, _, yaw = euler_from_quaternion(quaternion)

            print(f'X: {x}, Y: {y}, Yaw: {yaw} rad')
    node.destroy_node()
    rclpy.shutdown()
    
    
        
if __name__== "__main__":
    main()
    