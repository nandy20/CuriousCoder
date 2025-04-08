//https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
class Solution:
    def sumOfSeries(self,n):
        #code here
        total_sum = 0
        while n > 0:
            total_sum += n * n * n
            n -= 1
        return total_sum
