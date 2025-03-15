import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from moveit_msgs.action import MoveGroup
from rclpy.action import ActionClient
from moveit_msgs.msg import Constraints, JointConstraint, PositionConstraint

class MoveRobot(Node):
    def __init__(self):
        super().__init__('pick_place')

        # MoveIt 2 action client
        self.client = ActionClient(self, MoveGroup, '/move_action')

        # Wait for the action server
        self.client.wait_for_server()

    def move_to_pose(self, x, y, z):
        # Define the target pose
        position_constraints = PositionConstraint()
        position_constraints.header.frame_id = 'base'
        position_constraints.target_point_offset.x=x
        position_constraints.target_point_offset.y=y
        position_constraints.target_point_offset.z=z
        
        target_pose = PoseStamped()
        target_pose.header.frame_id = "base"  # Change if needed
        target_pose.pose.position.x = x
        target_pose.pose.position.y = y
        target_pose.pose.position.z = z
        target_pose.pose.orientation.w = 1.0  # No rotation

        # Create a motion request
        goal = MoveGroup.Goal()
        goal.request.goal_constraints = [Constraints()]
        goal.request.goal_constraints[0].position_constraints = [target_pose]

        # Send request and wait for response
        self.client.send_goal_async(goal)
        self.get_logger().info(f"✅ Moving to: ({x}, {y}, {z})")

def main(args=None):
    rclpy.init(args=args)
    node = MoveRobot()

    # Example: Move to (0.4, 0.2, 0.5)
    node.move_to_pose(0.4, 0.2, 0.5)

    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()