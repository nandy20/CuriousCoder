//https://www.geeksforgeeks.org/problems/sum-of-array2326/1
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
};
