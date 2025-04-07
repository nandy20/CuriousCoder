//https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
class Solution:
    def removeDuplicates(self, arr):
        # Code Here
        n = len(arr)
        if n == 0:
            return 0

        j = 0
        for i in range(1, n):
            if arr[i] != arr[i-1]:
                j += 1
                arr[j] = arr[i]

        return j + 1
