//https://www.geeksforgeeks.org/problems/count-squares3649/1
class Solution:
    def countSquares(self, n):
        # code here 
        sum = 0
        for i in range(1, int(math.sqrt(n)) + 1):
            if i * i < n:
                sum += 1
            else:
                break
        return sum
