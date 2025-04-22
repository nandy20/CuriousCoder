//https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int helper(Node *root,int &res)
    {
        //base case 
        if(root == nullptr)
        {
            return 0;
        }
        //recursive call 
        int l=helper(root->left,res);
        int r= helper(root->right,res);
        res = max(res,(l+r));
        return max(l,r) + 1;
    }
    int diameter(Node* root) {
        // Your code here
        int res=INT_MIN;
        helper(root,res);
        return res;
    }
};
