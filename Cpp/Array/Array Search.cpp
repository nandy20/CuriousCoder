//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {

        // Your code here
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                return i;
            }
        }
        return -1;
    }
};
