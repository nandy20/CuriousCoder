//https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
class Solution:
    #Function to return list containing elements of right view of binary tree.
    def rightView(self,root):
        
        # code here
        if not root:
            return []
        
        result = []
        queue = deque([root])
        
        while queue:
            level_size = len(queue)
            for i in range(level_size):
                node = queue.popleft()
                
                # Add the last element of each level to the result
                if i == level_size - 1:
                    result.append(node.data)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
        
        return result
