//https://leetcode.com/problems/rotate-array/
class Solution {
    public void rotate(int[] a, int k) {
        int n = a.length;
        k = k % n;
        int j = 0;

        // Store first n-k elements in a temp array
        int[] b = new int[n - k];
        for (int i = 0; i < n - k; i++) {
            b[i] = a[i];
        }

        // Shift the last k elements to the beginning
        for (int i = n - k; i < n; i++) {
            a[j++] = a[i];
        }

        // Copy back the stored elements
        for (int i = 0; i < b.length; i++) {
            a[j++] = b[i];
        }
    }
}
