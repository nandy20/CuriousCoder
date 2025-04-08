//https://www.geeksforgeeks.org/problems/special-series-sum0903/1
class Solution:
    def sumOfTheSeries(self, n):
        # code here
        termSum = 0
        totalSum = 0
        for i in range(1, n + 1):
            termSum += i
            totalSum += termSum
        return totalSum
