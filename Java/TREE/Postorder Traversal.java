//https://www.geeksforgeeks.org/problems/postorder-traversal/1
class Solution {
    // Helper function for postorder traversal
    void postOr(Node root, ArrayList<Integer> list) {
        if (root == null) return;

        postOr(root.left, list);   // Traverse left
        postOr(root.right, list);  // Traverse right
        list.add(root.data);       // Visit root
    }

    // Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root) {
        ArrayList<Integer> list = new ArrayList<>();
        postOr(root, list);
        return list;
    }
}
