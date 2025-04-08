//https://www.geeksforgeeks.org/problems/factorial5739/1
class Solution:
    def factorial (self, n):
        # code here
        fact = 1
        for i in range(1, n + 1):
            fact *= i
        return fact
