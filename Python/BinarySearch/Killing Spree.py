//https://www.geeksforgeeks.org/problems/killing-spree3020/0
class Solution:
    def killinSpree (self, n):
        # code here
        i, j = 1, int(n ** 0.5)
        ans = 0
        
        while i <= j:
            mid = i + (j - i) // 2
            sum = (mid * (mid + 1) * (2 * mid + 1)) // 6
            
            if sum > n:
                j = mid - 1
            else:
                ans = mid
                i = mid + 1
                
        return ans
