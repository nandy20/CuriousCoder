//https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
class Solution {
    int height(Node root) {
        if(root==null)return -1;
        return Math.max(1+height(root.left),1+height(root.right));
    }
}
