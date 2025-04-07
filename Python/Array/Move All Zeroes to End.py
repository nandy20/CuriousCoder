//https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
class Solution:
    def pushZerosToEnd(self, arr):
        # code here
        n = len(arr)
        j = 0
        for i in range(n):
            if arr[i] != 0:
                arr[j] = arr[i]
                j += 1
        for i in range(j, n):
            arr[i] = 0
