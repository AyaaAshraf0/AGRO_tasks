import rclpy
from std_msgs.msg import String 

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node("pub")
    pub = node.create_publisher(String,"topic",10)
    msg = String()
    i = 0
    
    def timer_callback():
        nonlocal i 
        msg.data = "Hello World: %d" % i
        i +=1
        node.get_logger().info("Publishing: '%s'" %msg.data)
        pub.publish(msg)
        
    timer = node.create_timer(0.5,timer_callback)
    rclpy.spin(node)
    node.destroy_timer(timer)
    node.destroy_node()
    rclpy.shutdown()
        
if __name__== "__main__":
    main()
    