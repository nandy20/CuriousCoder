//https://www.geeksforgeeks.org/problems/inorder-traversal/1
class Solution:
    def inOrder(self, root):
        result = []

        def inorderTraversal(node):
            if node is None:
                return
            inorderTraversal(node.left)
            result.append(node.data)
            inorderTraversal(node.right)

        inorderTraversal(root)
        return result
