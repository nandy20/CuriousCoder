//https://www.geeksforgeeks.org/problems/count-odd-even/1
class Solution:
	def countOddEven(self, arr):
		#Code here
		odd = 0
        even = 0
        for num in arr:
            if num % 2 == 0:
                even += 1
            else:
                odd += 1
        return [odd, even]
