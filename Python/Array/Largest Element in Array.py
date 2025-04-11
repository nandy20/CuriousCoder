//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
from typing import List


class Solution:
    def largest(self, arr):
        # code here
        max_ = arr[0]
        for num in arr:
            if num > max_:
                max_ = num
        return max_
