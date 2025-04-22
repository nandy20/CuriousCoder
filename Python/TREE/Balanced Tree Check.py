//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1
class Solution:
    def height(self, root):
        if not root:
            return 0
        
        left_height = self.height(root.left)
        right_height = self.height(root.right)
        
        # If the subtree is unbalanced, return -1
        if left_height == -1 or right_height == -1:
            return -1
        
        # If the current node is unbalanced, return -1
        if abs(left_height - right_height) > 1:
            return -1
        
        # Return the height of the current subtree
        return max(left_height, right_height) + 1

    # Function to check if the binary tree is balanced
    def isBalanced(self, root):
        return self.height(root) != -1
