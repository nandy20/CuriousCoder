//https://www.geeksforgeeks.org/problems/sum-of-series2811/1
class Solution:
    def seriesSum(self, n : int) -> int:
        # code here
        sum = 0
        while n > 0:
            sum += n
            n -= 1
        return sum
