//https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1
class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>ans;
        for(int i=0;i<arr.size();i=i+2)
        {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
