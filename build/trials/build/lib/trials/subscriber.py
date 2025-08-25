import rclpy
from std_msgs.msg import String 

node = None

def callback(msg):
    global node
    node.get_logger().info('I hearde: "%s"' % msg.data)
    
def main(args = None):
    global node
    rclpy.init(args=args)
    
    node = rclpy.create_node("subscriber")
    node.create_subscription(String,'topic',callback, 10)
    
    while rclpy.ok():
        rclpy.spin_once(node)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()