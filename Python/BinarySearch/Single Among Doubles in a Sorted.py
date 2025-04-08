//https://www.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
class Solution:
    def findOnce(self, arr):
        # Complete this function
        ans = 0
        for num in arr:
            ans ^= num  # Using XOR operation
        return ans
