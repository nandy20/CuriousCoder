//https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
class Solution:
    def get_min_max(self, arr):
        if not arr:
            return None  # or raise an error, depending on your requirement

        num1 = arr[0]
        num2 = arr[0]
        
        for num in arr:
            if num < num1:
                num1 = num
            if num > num2:
                num2 = num
        
        return (num1, num2)
