import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class TwistBridge(Node):
    def __init__(self):
        super().__init__('bridge_cmd')
        self.sub = self.create_subscription(Twist, '/cmd_vel', self.cb, 10)
        self.pub = self.create_publisher(Twist, '/mobile_base_controller/cmd_vel_unstamped', 10)

    def cb(self, msg):
        # twist = msg.twist
        self.pub.publish(msg)

def main():
    rclpy.init()
    node = TwistBridge()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()