//https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
def zigZagTraversal(self, root):
        if not root:
            return []
        
        result = []
        queue = deque([root])
        flag = True
        
        while queue:
            level_size = len(queue)
            level = []
            
            for _ in range(level_size):
                node = queue.popleft()
                level.append(node.data)
                
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            
            if not flag:
                level.reverse()
            
            result.extend(level)
            flag = not flag  # Toggle flag for next level
        
        return result
