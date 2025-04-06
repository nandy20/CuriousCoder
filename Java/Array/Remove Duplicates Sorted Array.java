//https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
class Solution {
    // Function to remove duplicates from the given sorted array
    public int removeDuplicates(int[] a) {
        int n = a.length;
        if (n == 0) return 0;

        int j = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                a[j++] = a[i];
            }
        }
        a[j++] = a[n - 1];
        
        return j; // new length of array without duplicates
    }
}
