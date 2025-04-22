//https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root){
        if(root==NULL){
            return 0;
        }
        int l=height(root->left);
        int r=height(root->right);
        
        if(l!=-1 && r!=-1){
            if(abs(l-r)<=1 && abs(l-r)>-1){
                return max(l,r)+1;
            }
            else{
                return -1;
            }
        }
        return -1;
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(height(root)==-1){
            return false;
        }
        return true;
        
    }
};
