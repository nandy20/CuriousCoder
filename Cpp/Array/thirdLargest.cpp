//https://www.geeksforgeeks.org/problems/third-largest-element/1
class Solution {
  public:
  
    int thirdLargest(vector<int>&a)
    {
        sort(a.begin(), a.end());
         return a[a.size()-3];
    }
};
