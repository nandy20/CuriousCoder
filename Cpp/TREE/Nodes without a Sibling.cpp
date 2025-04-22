//https://www.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1
void sibl(Node *root,vector<int>&vec){
    if(root==NULL){
        return ;
    }
    if(root->left!=NULL && root->right==NULL){
        vec.push_back(root->left->data);
    }
     if(root->left==NULL && root->right!=NULL){
        vec.push_back(root->right->data);
    }
    sibl(root->left,vec);
    sibl(root->right,vec);
}
vector<int> noSibling(Node* root)
{
    // code here
    vector<int>vec;
    sibl(root,vec);
    if(vec.size()==0){
        vec.push_back(-1);
    }
    sort(vec.begin(),vec.end());
    return vec;
}
