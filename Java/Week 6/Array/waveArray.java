// https://www.geeksforgeeks.org/problems/wave-array-1587115621/1?page=1
class Solution {
    public static void convertToWave(int[] a) {
        // code here
        int n = a.length;
        for(int i=0;i<n-1;i=i+2){
            int temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
            
        }
    }
}
