//https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
class Solution:
    # Function to sort an array of 0s, 1s, and 2s
    def sort012(self, arr):
        i, j, k = 0, 0, len(arr) - 1
        
        while j <= k:
            if arr[j] == 0:
                arr[i], arr[j] = arr[j], arr[i]
                i += 1
                j += 1
            elif arr[j] == 2:
                arr[j], arr[k] = arr[k], arr[j]
                k -= 1
            else:  # arr[j] == 1
                j += 1
