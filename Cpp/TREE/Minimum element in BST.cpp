//https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1
class Solution 
{
public:
int minValue(Node* root) 
{
    // Code here
    while(root->left !=NULL)
    {
            root = root->left;
    }
    return root->data;
}
};
