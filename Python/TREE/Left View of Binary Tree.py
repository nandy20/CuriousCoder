//https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1
class Solution:
    def LeftView(self, root):
        # code here
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            level_size = len(queue)
            for i in range(level_size):
                node = queue.popleft()
                
                # Add the first element of each level to the result
                if i == 0:
                    result.append(node.data)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        
        return result
