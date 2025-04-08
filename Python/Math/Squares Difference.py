//https://www.geeksforgeeks.org/problems/squares-difference0939/1
class Solution:
    def squaresDiff (self, N):
        # code here 
        return abs((N * (N + 1) * (2 * N + 1)) // 6 - pow(N * (N + 1) // 2, 2))
