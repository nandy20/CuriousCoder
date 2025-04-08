//https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
class Solution {
    // Function to calculate time with k painters
    public int getTime(int[] a, int n, int times, int k) {
        int sum = 0, paint = 1;
        for (int i = 0; i < n; i++) {
            if (sum + a[i] > times) {
                paint++;
                sum = a[i];
            } else {
                sum += a[i];
            }
        }
        return paint;
    }

    public int minTime(int[] arr, int k) {
        int low = 0, high = 0, n = arr.length;
        
        // Find the maximum and sum of the array for binary search
        for (int i = 0; i < n; i++) {
            low = Math.max(low, arr[i]);
            high += arr[i];
        }
        
        int ans = -1;
        // Binary search to find the minimum time
        while (low <= high) {
            int mid = (low + high) / 2;
            int paint = getTime(arr, n, mid, k);
            if (paint <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}
