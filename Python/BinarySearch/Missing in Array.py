//https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
class Solution:
    def missingNumber(self, arr):
        # code here
        n = len(arr)
        arr.sort()

        i, j = 0, n - 1

        # Binary search to find the missing number
        while i < j:
            mid = (i + j) // 2
            if arr[mid] == mid + 1:
                i = mid + 1
            else:
                j = mid

        # If the last element matches the expected value, return n + 1
        if j + 1 == arr[n - 1]:
            return n + 1
        return j + 1
