//https://leetcode.com/problems/split-array-largest-sum/
class Solution:
    def getSplit(self, arr, cap):
        days = 1
        sum = 0
        for num in arr:
            if sum + num <= cap:
                sum += num
            else:
                sum = num
                days += 1
        return days
    
    def splitArray(self, nums: List[int], k: int) -> int:
        low = max(nums)
        high = sum(nums)
        ans = low
        while low <= high:
            mid = (low + high) // 2
            split = self.getSplit(nums, mid)
            if split <= k:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        return ans
        
