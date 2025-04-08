//https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        int l = 0, r = n - 1;
        
        while (l < r) {
            if (nums[l] < nums[r]) {
                return nums[l];
            }
            
            int mid = (l + r) / 2;
            
            if (nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        
        return nums[l];
    }
}
