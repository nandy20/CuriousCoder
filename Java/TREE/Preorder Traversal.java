//https://www.geeksforgeeks.org/problems/preorder-traversal/1
class Solution {
    // Function to return a list containing the preorder traversal of the tree.
    
    static void traversal(Node node, ArrayList<Integer>list){
        if(node==null){
            return;
        }
        list.add(node.data);
        traversal(node.left, list);
        traversal(node.right, list);
    }
    static ArrayList<Integer> preorder(Node root) {
        // write code here
       ArrayList<Integer>list = new ArrayList();
       traversal(root, list);
       return list;
    }
}
