//https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1
class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	 vector<int>ans;
       if(root==NULL)
           return ans;
       queue<Node*>q;
       q.push(root);
       bool flag=true;
       
       while(!q.empty())
       {
           int size=q.size();
           vector<int>level;
           
           for(int i=0;i<size;i++)
           {
               Node* node=q.front();
               q.pop();
               level.push_back(node->data);
               
               if(node->left!=NULL)
                   q.push(node->left);
               if(node->right!=NULL)
                   q.push(node->right);
           }
           
           if(!flag)
           {
               reverse(level.begin(),level.end());
           }
           for(auto it:level)
                    ans.push_back(it);
            
           flag=!flag;
       }
       return ans;
    }
};
