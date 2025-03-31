//https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
class Solution {
  public:
    // arr: input array
    // Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n-1;i=i+2){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            
        }
    }
};
