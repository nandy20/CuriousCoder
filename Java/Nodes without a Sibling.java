//https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1
import java.util.*;

class Tree {
    // Helper function to find nodes with no sibling
    void sibl(Node root, ArrayList<Integer> vec) {
        if (root == null) {
            return;
        }

        // Check if left child exists and right child does not
        if (root.left != null && root.right == null) {
            vec.add(root.left.data);
        }

        // Check if right child exists and left child does not
        if (root.left == null && root.right != null) {
            vec.add(root.right.data);
        }

        // Recursive calls for left and right subtrees
        sibl(root.left, vec);
        sibl(root.right, vec);
    }

    // Function to return a list of nodes with no sibling
    public ArrayList<Integer> noSibling(Node root) {
        ArrayList<Integer> vec = new ArrayList<>();
        sibl(root, vec);

        // If no nodes without siblings, return -1
        if (vec.size() == 0) {
            vec.add(-1);
        }

        // Sort the list
        Collections.sort(vec);
        return vec;
    }
}
