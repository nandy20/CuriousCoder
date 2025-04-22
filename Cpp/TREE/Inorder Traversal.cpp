//https://www.geeksforgeeks.org/problems/inorder-traversal/1
class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int>vec;
    void inor(Node *root){
        if(root==NULL){
            return;
        }
        inor(root->left);
        vec.push_back(root->data);
        inor(root->right);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        inor(root);
        return vec; 
    }
};
