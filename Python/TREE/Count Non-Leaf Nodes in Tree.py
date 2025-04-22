//https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
class Solution:
    def countNonLeafNodes(self, root):
        # add code here
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 0
        return 1 + self.countNonLeafNodes(root.left) + self.countNonLeafNodes(root.right)
