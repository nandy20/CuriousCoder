//https://www.geeksforgeeks.org/problems/postorder-traversal/1
class Solution:
    # Function to return a list containing the postorder traversal of the tree.
    def postOrder(self, root):
        result = []

        def traverse(node):
            if node is None:
                return
            traverse(node.left)     # Traverse left subtree
            traverse(node.right)    # Traverse right subtree
            result.append(node.data)  # Visit root

        traverse(root)
        return result
