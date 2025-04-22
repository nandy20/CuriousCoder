//https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
class Solution:
    #Function to check if two trees are identical.
    def isIdentical(self,r1, r2):
        # Code here
        if r1 is None and r2 is None:
            return True
        if r1 is None or r2 is None:
            return False
        if r1.data != r2.data:
            return False
        return self.isIdentical(r1.left, r2.left) and self.isIdentical(r1.right, r2.right)
