import heapq 

import rclpy
# from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from nav_msgs.msg import Path

# initialize Grid, start point, end point 
Grid = [[0 for i in range(5)] for i in range(5)] 
grid_size = 5
# define obstacles here 
start_point = (0,0)
destination = (4,4)

# closed set (nodes visited)
visited_nodes = set()

# open list (prioritized)
open_set = []

# Node class  
class Node:
    def __init__(self,x,y,previous_node=None):
        self.x = x
        self.y = y
        self.parent = previous_node
        if previous_node == None:
            self.g = 0
        else:
            self.g = previous_node.g + 1 

        self.h = abs(x-destination[0])+abs(y - destination[1]) #Manhattan distance 
        self.f = self.g + self.h
        
    def __lt__(self,other):
        return self.f < other.f

def get_neighbours(x,y,grid_size):
    neighbours = []
    for dx , dy in [(1,0),(-1,0),(0,1),(0,-1)]:
        nx ,ny = x+dx, y+dy 
        if 0<= nx<grid_size and 0<= ny <grid_size:
            neighbours.append((nx,ny))
        
    return neighbours

def construct_path(node):
    path =[]
    while(node is not None):
        path.append((node.x,node.y))
        node = node.parent
    path.reverse()
    return path

start_node = Node(start_point[0],start_point[1])
heapq.heappush(open_set,start_node)

def main():
    rclpy.init()
    node = rclpy.create_node("astar_path_pub")
    pub = node.create_publisher(Path,'Astar_path',10)
    
    while open_set:
        current_node = heapq.heappop(open_set)
        if ((current_node.x,current_node.y) == destination):
            path = construct_path(current_node)
            break
        
        visited_nodes.add((current_node.x,current_node.y))
        
        for nx,ny in get_neighbours(current_node.x,current_node.y,grid_size):
            if (nx,ny) in visited_nodes:
                continue
            
            neighbour_node = Node(nx,ny,current_node)
            heapq.heappush(open_set,neighbour_node)

    msg = Path()
    msg.header.frame_id = "map"
    msg.header.stamp = node.get_clock().now().to_msg()

    for (x,y) in path:
        pose = PoseStamped()
        pose.header.frame_id = "map"
        pose.pose.position.x = float(x/10.0)
        pose.pose.position.y = float(y/10.0)
        pose.pose.orientation.w = 1.0
        msg.poses.append(pose)
    
    def timer_callback():
        pub.publish(msg)
        node.get_logger().info(f"Publishing the path of {len(path)} points")
    
    timer = node.create_timer(0.5,timer_callback)
    rclpy.spin(node)
    node.destroy_timer(timer)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ =="__main__":
    main()
