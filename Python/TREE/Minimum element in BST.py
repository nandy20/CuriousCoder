//https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1
class Solution:
    #Function to find the minimum element in the given BST.
    def minValue(self, root):
        ##Your code here
        if root is None:
            return float('inf')  # or return -1 if tree is empty, based on context
        
        current = root
        while current.left:
            current = current.left
