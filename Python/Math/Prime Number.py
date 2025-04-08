//https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution:
    def isPrime(self, n):
        # code here
        if n <= 1:
            return False
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True
