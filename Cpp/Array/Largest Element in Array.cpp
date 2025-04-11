//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
};
