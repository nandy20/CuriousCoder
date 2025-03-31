//https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
         int n=arr.size(), result=0,i,j;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    result++;
                }
            }
        }
        return result;
    }
};
