//https://www.geeksforgeeks.org/problems/sum-of-array2326/1
class Solution {
    int arraySum(int arr[]) {
        // code here
        int sum=0;
        for(int i=0;i<arr.length;i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
}
