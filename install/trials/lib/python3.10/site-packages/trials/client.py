import sys
import rclpy
from service_define.srv import AddTwoInts
from std_msgs.msg import Int64

def send_request(client, request):
    response = client.call_async(request)
    rclpy.spin_until_future_complete(node,response)
    return response

def main(args=None):
    global node
    rclpy.init(args=args)
    node= rclpy.create_node("client")
    client = node.create_client(AddTwoInts,"add_two_integers")
    while not client.wait_for_service(timeout_sec=1.0):
        print("Service not available yet")
    
    request = AddTwoInts.Request()
    request.a = int(sys.argv[1])
    request.b = int(sys.argv[2])
    response = send_request(client, request)
    if response.result() is not None:
        print(f"Result: {response.result().sum}")
    else: 
        print("FAILED")
    node.destroy_node()
    rclpy.shutdown()
    
if __name__=="__main__":
    main()
