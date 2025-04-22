//https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
class Solution:
    def sumBT(self, root):
        #code here
        if root is None:
            return 0
        return root.data + self.sumBT(root.left) + self.sumBT(root.right)
        
