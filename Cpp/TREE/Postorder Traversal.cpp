//https://www.geeksforgeeks.org/problems/postorder-traversal/1
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    void postOr(Node *root,vector<int>&vec){
     if(root==NULL){
         return;
     }
     postOr(root->left,vec);
     postOr(root->right,vec);
     vec.push_back(root->data);
 }
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int>vec;
        postOr(root,vec);
        return vec;
    }
};
