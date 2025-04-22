//https://www.geeksforgeeks.org/problems/level-order-traversal/1
class Solution:
    def levelOrder(self, root):
        # Your code here
        result = []
        if not root:
            return result

        queue = deque()
        queue.append(root)

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

            result.append(level)

        return result
        
