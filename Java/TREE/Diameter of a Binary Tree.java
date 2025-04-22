//https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1
class Solution {
    private int helper(Node root, int[] res) {
        // Base case: if the node is null, return height 0
        if (root == null) {
            return 0;
        }

        // Recursive call to get the height of left and right subtrees
        int leftHeight = helper(root.left, res);
        int rightHeight = helper(root.right, res);

        // Update the diameter (maximum of current diameter and sum of left and right heights)
        res[0] = Math.max(res[0], leftHeight + rightHeight);

        // Return the height of the current node (1 + max of left and right heights)
        return Math.max(leftHeight, rightHeight) + 1;
    }

    // Function to calculate the diameter of the binary tree
    public int diameter(Node root) {
        int[] res = new int[1];  // This will hold the maximum diameter
        helper(root, res);
        return res[0];  // The result is stored in res[0]
    }
}
