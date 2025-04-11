//https://www.geeksforgeeks.org/problems/sum-of-array2326/1
class Solution:
    def arraySum(self, arr):
        sum_ = 0
        for i in range(len(arr)):
            sum_ += arr[i]
        return sum_
