import rclpy
from service_define.srv  import AddTwoInts
from std_msgs.msg import Int64

def add_two_ints_callback(request, response):
    global node
    response.sum = request.a +request.b
    node.get_logger().info("Incoming request\na: %d b: %d" %(request.a,request.b ))
    return response

def main(args=None):
    global node
    rclpy.init(args=args)
    
    node = rclpy.create_node("server")
    srv = node.create_service(AddTwoInts,"add_two_integers", add_two_ints_callback)
    while rclpy.ok():
        rclpy.spin_once(node)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__=="__main__":
    main()
    