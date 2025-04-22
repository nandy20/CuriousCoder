//https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
class Solution:
    def getSize(self, node : Optional['Node']) -> int:
        # code here
        if node is None:
            return 0
        left_size = self.getSize(node.left)
        right_size = self.getSize(node.right)
        return left_size + right_size + 1
