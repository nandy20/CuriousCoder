//https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
class Solution:
    def getTime(self, a, n, times, k):
        sum = 0
        paint = 1
        for i in range(n):
            if sum + a[i] > times:
                paint += 1
                sum = a[i]
            else:
                sum += a[i]
        return paint

    def minTime(self, arr, k):
        low = max(arr)
        high = sum(arr)
        ans = -1
        while low <= high:
            mid = (low + high) // 2
            paint = self.getTime(arr, len(arr), mid, k)
            if paint <= k:
                ans = mid
                high = mid - 1
            else:
                low = mid + 1
        return ans
