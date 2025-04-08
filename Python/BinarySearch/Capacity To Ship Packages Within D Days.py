//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
class Solution:
    def getdays(self, weights, cap):
        days = 1
        sum = 0
        for weight in weights:
            if sum + weight <= cap:
                sum += weight
            else:
                sum = weight
                days += 1
        return days

    def shipWithinDays(self, weights: List[int], days: int) -> int:
        low = max(weights)
        high = sum(weights)
        ans = low

        while low <= high:
            mid = (low + high) // 2
            day = self.getdays(weights, mid)
            if day <= days:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        return ans
        
