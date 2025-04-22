//https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
class Solution
{
private:
    void total(Node *root, int &count)
    {
        if (root == NULL)
            return;

        count++;
        total(root->left, count);
        total(root->right, count);
    }

public:
    int getSize(Node *root)
    {
        int count = 0;
        total(root, count);
        return count;
    }
};
