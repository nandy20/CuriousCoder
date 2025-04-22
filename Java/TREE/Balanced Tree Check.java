//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1
class Solution {
    public int height(Node root) {
        if (root == null) {
            return 0;
        }
        
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        
        // If the subtree is unbalanced, return -1
        if (leftHeight == -1 || rightHeight == -1) {
            return -1;
        }
        
        // If the current node is unbalanced, return -1
        if (Math.abs(leftHeight - rightHeight) > 1) {
            return -1;
        }
        
        // Return the height of the current subtree
        return Math.max(leftHeight, rightHeight) + 1;
    }

    // Function to check if the binary tree is balanced
    public boolean isBalanced(Node root) {
        return height(root) != -1;
    }
}
