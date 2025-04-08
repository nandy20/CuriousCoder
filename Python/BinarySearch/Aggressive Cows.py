//https://www.geeksforgeeks.org/problems/aggressive-cows/0
class Solution:

    def canPlaceCows(self, stalls, k, dist):
        count = 1
        last_pos = stalls[0]
        
        for i in range(1, len(stalls)):
            if stalls[i] - last_pos >= dist:
                count += 1
                last_pos = stalls[i]
                if count == k:
                    return True
        return False

    def aggressiveCows(self, stalls, k):
        stalls.sort()
        low, high = 1, stalls[-1] - stalls[0]
        ans = 0
        
        while low <= high:
            mid = (low + high) // 2
            if self.canPlaceCows(stalls, k, mid):
                ans = mid
                low = mid + 1
            else:
                high = mid - 1
                
        return ans
