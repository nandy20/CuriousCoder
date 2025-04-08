//https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
class Solution:
    def findMin(self, arr):
        l, r = 0, len(arr) - 1
        
        while l < r:
            if arr[l] < arr[r]:
                return arr[l]
            
            mid = (l + r) // 2
            
            if arr[mid] > arr[r]:
                l = mid + 1
            else:
                r = mid
        
        return arr[l]
