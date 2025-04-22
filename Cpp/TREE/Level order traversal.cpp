//https://www.geeksforgeeks.org/problems/level-order-traversal/1
class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<vector<int>> levelOrder(Node *root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>level;
        
        for(int i=0;i<size;i++){
            Node*temp=q.front();
            q.pop();
             level.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(level);
        }
        return ans;
    }
};
