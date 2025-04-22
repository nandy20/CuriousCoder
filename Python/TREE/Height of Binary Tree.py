//https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
class Solution:
    #Function to find the height of a binary tree.
    def height(self, root):
        # code here
        if root == None:
            return -1
        hl = 1+self.height(root.left)
        hr = 1+self.height(root.right)
        return max(hl,hr)
