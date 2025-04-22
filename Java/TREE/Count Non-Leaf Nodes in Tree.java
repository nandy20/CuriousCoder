//https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
class Solution
{
	int countNonLeafNodes(Node root) {
	    //code here
	    if(root==null){
	        return 0;
	    }
	    if(root.left==null && root.right==null){
	        return 0;
	    }
	    return 1+countNonLeafNodes(root.left)+countNonLeafNodes(root.right);
	    
	}
}
