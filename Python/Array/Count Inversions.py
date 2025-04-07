//https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
class Solution:
    # Function to count inversions in the array.
    def inversionCount(self, arr):
        # Your Code Here
        n = len(arr)
        result = 0
        for i in range(n - 1):
            for j in range(i + 1, n):
                if arr[i] > arr[j]:
                    result += 1
        return result
