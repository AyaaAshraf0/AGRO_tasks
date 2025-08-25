import rclpy 
from rclpy.action import ActionClient

from nav2_msgs.action import ComputePathToPose
from geometry_msgs.msg import PoseStamped 

def create_goal_pose(node):
    goal = PoseStamped()
    goal.header.frame_id = 'map'
    goal.header.stamp = node.get_clock().now().to_msg()
    goal.pose.position.x = -20.0
    goal.pose.position.y = -22.0
    goal.pose.orientation.w = 1.0
    return goal

def feedback_callback(feedback):
    print(f"Planning time (feedback): {feedback.feedback.planning_time:.3f} s")

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('simple_path_client')
    client = ActionClient(node, ComputePathToPose, 'compute_path_to_pose')
   
    while not client.wait_for_server(timeout_sec=1.0):
        print('Waiting for server...')

    goal = ComputePathToPose.Goal()
    goal.goal = create_goal_pose(node)

    future = client.send_goal_async(goal, feedback_callback=feedback_callback)

    rclpy.spin_until_future_complete(node, future)
    goal_handle = future.result()

    if not goal_handle.accepted:
        print("Goal rejected")
        return

    print("Goal accepted")
    result_future = goal_handle.get_result_async()
    rclpy.spin_until_future_complete(node, result_future)

    result = result_future.result().result
    print(f"Received path with {len(result.path.poses)} poses.")

    # Optional: calculate path length
    length = 0.0
    poses = result.path.poses
    for i in range(1, len(poses)):
        dx = poses[i].pose.position.x - poses[i-1].pose.position.x
        dy = poses[i].pose.position.y - poses[i-1].pose.position.y
        length += (dx*2 + dy*2)*0.5

    print(f"Estimated path length: {length:.3f} meters")
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '_main_':
    main()