//https://leetcode.com/problems/first-bad-version/
class Solution:
    def firstBadVersion(self, n: int) -> int:
        l, h = 1, n
        ans = -1
        while l <= h:
            mid = l + (h - l) // 2
            if isBadVersion(mid):
                ans = mid
                h = mid - 1
            else:
                l = mid + 1
        return ans
