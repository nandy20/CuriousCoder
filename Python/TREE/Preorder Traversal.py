//https://www.geeksforgeeks.org/problems/preorder-traversal/1
class Solution:
#Function to return a list containing the preorder traversal of the tree.
    def preorder(self, root):
        result = []

        def traversal(node):
            if node is None:
                return
            result.append(node.data)     # Visit root
            traversal(node.left)         # Traverse left subtree
            traversal(node.right)        # Traverse right subtree

        traversal(root)
        return result
