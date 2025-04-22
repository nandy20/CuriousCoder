//https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1
class Solution {
    // Function to find the minimum element in the given BST.
    int minValue(Node root) {
        // code here
        if(root==null){
            return Integer.MAX_VALUE;
        }
       if(root.left==null){
           return root.data;
       }
       return minValue(root.left);
    }
}
