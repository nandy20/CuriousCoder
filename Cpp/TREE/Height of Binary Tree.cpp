//https://www.geeksforgeeks.org/problems/height-of-binary-tree/1
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* root){
        // code here 
        if(root==NULL){
            return -1;
        }
        return 1+max(height(root->left),height(root->right));
    }
};
