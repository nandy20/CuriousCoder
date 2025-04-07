//https://www.geeksforgeeks.org/problems/third-largest-element/1
class Solution:
    def thirdLargest(self, arr):
        # code here
        arr.sort()
        return arr[-3]
