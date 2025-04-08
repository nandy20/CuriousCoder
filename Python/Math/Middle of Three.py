//https://www.geeksforgeeks.org/problems/middle-of-three2926/1
class Solution:
    def middle(self, a, b, c):
        #code here
        if a > b and a > c:
            return b if b > c else c
        elif b > a and b > c:
            return a if a > c else c
        else:
            return a if a > b else b
