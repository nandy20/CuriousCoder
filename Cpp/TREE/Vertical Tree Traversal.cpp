//https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<vector<int>> verticalOrder(Node* root) {
        if (root == nullptr) {
            return {};  // Return empty vector if tree is empty
        }
        
        vector<vector<int>> ans;  // This will store the result
        queue<pair<Node*, int>> q;  // Queue to store nodes and their horizontal distance (hd)
        map<int, vector<int>> m;  // Map to store nodes by their horizontal distance
        
        q.push({root, 0});  // Push the root with hd = 0
        
        while (!q.empty()) {
            auto temp = q.front();
            q.pop();
            
            Node* node = temp.first;
            int hd = temp.second;
            
            // Add node's data to the map at corresponding hd
            m[hd].push_back(node->data);
            
            // Push left child with hd-1
            if (node->left) {
                q.push({node->left, hd - 1});
            }
            
            // Push right child with hd+1
            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }
        
        // Extract values from map and store them in the result
        for (auto& entry : m) {
            ans.push_back(entry.second);
        }
        
        return ans;
    }
};
