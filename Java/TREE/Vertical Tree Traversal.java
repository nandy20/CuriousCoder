//https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
class Solution {
    // Helper function to perform DFS and
    // store nodes at different horizontal distances
    static void DFS(Node root, int hd, int[] mn,
                    HashMap<Integer, ArrayList<Integer>> mp) {
        if (root == null) return;

        // Store the current node in the map at horizontal distance hd
        if (!mp.containsKey(hd)) mp.put(hd, new ArrayList<>());

        mp.get(hd).add(root.data);

        // Update the minimum horizontal distance
        mn[0] = Math.min(mn[0], hd);

        // Recursively traverse the left and right subtrees
        DFS(root.left, hd - 1, mn, mp);
        DFS(root.right, hd + 1, mn, mp);
    }

    // Function to perform vertical order traversal of a binary tree
    static ArrayList<ArrayList<Integer>> verticalOrder(Node root) {

        // HashMap to store nodes at each horizontal distance
        HashMap<Integer, ArrayList<Integer>> mp = new HashMap<>();

        // Array to track the minimum horizontal distance (mutable)
        int[] mn = {0};

        // Perform DFS to fill the hashmap with vertical levels
        DFS(root, 0, mn, mp);

        ArrayList<ArrayList<Integer>> res = new ArrayList<>();
        int hd = mn[0];

        // Traverse the map from minimum to maximum horizontal distance
        while (mp.containsKey(hd)) {
            res.add(mp.get(hd));
            hd++;
        }

        return res;
    }
}
