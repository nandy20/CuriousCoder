//https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       if(root==NULL){
       return {};
   }
   queue<Node *>q;
   q.push(root);
   vector<int>vec;
   while(!q.empty()){
       int size=q.size();
       for(int i=0;i<size;i++){
           if(i==size-1){
               vec.push_back(q.front()->data);
           }
           Node *front=q.front();
           if(front->left!=NULL){
               q.push(front->left);
           }
            if(front->right!=NULL){
               q.push(front->right);
           }
           q.pop();
       }
   }
   return vec;
    }
};
