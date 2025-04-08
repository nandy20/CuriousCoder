//https://leetcode.com/problems/split-array-largest-sum/
class Solution {
    public int getSplit(int[] arr, int cap) {
        int days = 1;
        int sum = 0;
        for (int num : arr) {
            if (sum + num <= cap) {
                sum += num;
            } else {
                sum = num;
                days++;
            }
        }
        return days;
    }

    public int splitArray(int[] nums, int k) {
        int low = 0, high = 0;
        for (int num : nums) {
            low = Math.max(low, num);
            high += num;
        }
        int ans = low;
        while (low <= high) {
            int mid = (low + high) / 2;
            int split = getSplit(nums, mid);
            if (split <= k) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
}
