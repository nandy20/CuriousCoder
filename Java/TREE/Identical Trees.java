//https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1
class Solution {
    // Function to check if two trees are identical.
    boolean isIdentical(Node r1, Node r2) {
        // Code Here
        if(r1==null && r2==null){
           return true;
       }
       if(r1==null && r2!=null){
           return false;
       }
       if(r1!=null && r2==null){
           return false;
       }
       if(r1.data!=r2.data){
           return false;
       }
       return isIdentical(r1.left,r2.left) && isIdentical(r1.right,r2.right);
    }
}
