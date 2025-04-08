//https://www.geeksforgeeks.org/problems/number-of-divisors1631/1?
class Solution:
    def countDivisors(self, n):
        # code here
        return sum(n%i == 0 and i%3 == 0 for i in range(1, N + 1))
