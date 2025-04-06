//https://www.geeksforgeeks.org/problems/third-largest-element/1
class Solution {
    int thirdLargest(int arr[]) {
       Arrays.sort(arr);
       return arr[arr.length-3];
    }
}
