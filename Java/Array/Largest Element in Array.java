//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
class Solution {
    public static int largest(int[] arr) {
        // code here
        int n=arr.length;
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    }
}
