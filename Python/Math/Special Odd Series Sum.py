//https://www.geeksforgeeks.org/problems/special-odd-series-sum1235/1
class Solution:
    def sumOfTheSeries (self, n):
        # code here 
        return sum(i * i for i in range(1, n + 1))
