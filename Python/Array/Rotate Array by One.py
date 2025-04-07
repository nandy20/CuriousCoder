//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
class Solution:
    def rotate(self, arr):
        if not arr:
            return
        
        temp = arr[-1]
        for i in range(len(arr) - 1, 0, -1):
            arr[i] = arr[i - 1]
        arr[0] = temp
