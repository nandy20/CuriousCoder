//ttps://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
class Solution:
    def gcd(self, a : int, b : int) -> int:
        # code here
        while b:
            a, b = b, a % b
        return a
