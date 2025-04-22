//https://www.geeksforgeeks.org/problems/inorder-traversal/1
class Solution {
    
    ArrayList<Integer> list = new ArrayList();
    void inorderTraversal(Node node){
        if(node==null){
           return;
       }
       inorderTraversal(node.left);
       list.add(node.data);
       inorderTraversal(node.right);
    }
    ArrayList<Integer> inOrder(Node node) {
       inorderTraversal(node);
       return list;
    }
}
