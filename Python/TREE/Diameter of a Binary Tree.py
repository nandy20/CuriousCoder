//https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1
class Solution:
    def helper(self, root, res):
        # Base case: if the node is null, return 0
        if not root:
            return 0
        
        # Recursive calls for left and right subtrees
        left_height = self.helper(root.left, res)
        right_height = self.helper(root.right, res)
        
        # Update the diameter (max of current diameter and left + right height)
        res[0] = max(res[0], left_height + right_height)
        
        # Return the height of the current node
        return max(left_height, right_height) + 1

    # Function to calculate the diameter of the binary tree
    def diameter(self, root):
        res = [0]  # This holds the result, using list to pass by reference
        self.helper(root, res)
        return res[0] 
