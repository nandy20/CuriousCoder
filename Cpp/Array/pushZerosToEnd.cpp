//https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int j=0;
       for(int i=0;i<n;i++){
           if(arr[i]!=0){
               arr[j] = arr[i];
               j++;
           }
       }
       for(int i=j;i<n;i++){
           arr[i] = 0;
       }
    }
};
