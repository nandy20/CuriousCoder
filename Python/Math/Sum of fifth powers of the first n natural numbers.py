//https://www.geeksforgeeks.org/problems/sum-of-fifth-powers-of-the-first-n-natural-numbers3415/1
class Solution:
    def sumOfFifthPowers(self,N):
        #code here
        sum = 0
        for i in range(1, N + 1):
            sum += pow(i, 5)
        return sum
