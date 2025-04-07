//https://www.geeksforgeeks.org/problems/wave-array-1587115621/1
from typing import List

class Solution:
    def convertToWave(self, arr: List[int]) -> None:
        # code here
        n = len(arr)
        for i in range(0, n - 1, 2):
            arr[i], arr[i + 1] = arr[i + 1], arr[i]
