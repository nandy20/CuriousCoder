//https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        if(root->left!=NULL && root->right==NULL){
            return 1+countNonLeafNodes(root->left);
        }
        if(root->left==NULL && root->right!=NULL){
            return 1+countNonLeafNodes(root->right);
        }
        return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
        
    }
};
