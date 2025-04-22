//https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1
class Solution {
  public:
    int sumBT(Node* root) {
        while(root == NULL){
            return 0;
         }
    return root->data + sumBT(root->left) + sumBT(root->right);
     }
};

