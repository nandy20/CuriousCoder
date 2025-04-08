//https://www.geeksforgeeks.org/problems/palindrome0746/1
class Solution:
    def isPalindrome(self, n):
		# Code here
		temp = n
        sum = 0
        while n > 0:
            rev = n % 10
            sum = sum * 10 + rev
            n = n // 10
        return temp == sum
