//https://www.geeksforgeeks.org/problems/preorder-traversal/1
class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    void traverse(Node*root,vector<int>&ans){
        if(root == NULL){
            return;
        }
        ans.push_back(root->data);
  
        traverse(root->left,ans);
        traverse(root->right,ans);
    }
    vector<int> preorder(Node* root) {
        vector<int>ans;
        traverse(root,ans);
        return ans;
       
    }
};
