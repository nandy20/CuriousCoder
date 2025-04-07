//https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution:
    def findKRotation(self, arr):
        # code here
        n = len(arr)
        l, h = 0, n - 1
        ans = 0
        
        while l <= h:
            mid = l + (h - l) // 2
            i = (mid - 1 + n) % n
            j = (mid + 1) % n
            
            if arr[mid] < arr[i] and arr[mid] < arr[j]:
                return mid
            
            if arr[h] > arr[mid]:
                h = mid - 1
            else:
                ans = mid
                l = mid + 1
        
        return ans
