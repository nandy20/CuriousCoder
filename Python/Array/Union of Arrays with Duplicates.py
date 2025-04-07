//https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
class Solution:    
    # Function to return the count of number of elements in union of two arrays.
    def findUnion(self, a, b):
        s = set()
        for num in a:
            s.add(num)
        for num in b:
            s.add(num)
        return len(s)
