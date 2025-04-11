//https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1
class Solution:
    def smallest(self, a, n, exclude):
        res = float('inf')
        for i in range(n):
            if a[i] < res and a[i] != exclude:
                res = a[i]
        return res

    def minAnd2ndMin(self, arr):
        n = len(arr)
        min1 = self.smallest(arr, n, float('inf'))
        min2 = self.smallest(arr, n, min1)
        if min1 == float('inf') or min2 == float('inf'):
            return [-1, -1]
        return [min1, min2]
