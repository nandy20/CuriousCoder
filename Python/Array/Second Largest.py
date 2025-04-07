//https://www.geeksforgeeks.org/problems/second-largest3735/1
class Solution:
    def getSecondLargest(self, arr):
        # Code Here
        if len(arr) < 2:
            return -1  # or handle as needed
        
        max_val = -1
        for num in arr:
            if num > max_val:
                max_val = num

        max2 = -1
        for num in arr:
            if num != max_val and num > max2:
                max2 = num

        return max2
