//https://leetcode.com/problems/merge-sorted-array/
class Solution {
    public void merge(int[] num1, int m, int[] num2, int n) {
        int[] num3 = new int[m + n];
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (num1[i] < num2[j]) {
                num3[k++] = num1[i++];
            } else {
                num3[k++] = num2[j++];
            }
        }

        while (i < m) {
            num3[k++] = num1[i++];
        }

        while (j < n) {
            num3[k++] = num2[j++];
        }

        for (int x = 0; x < m + n; x++) {
            num1[x] = num3[x];
        }
    }
}
