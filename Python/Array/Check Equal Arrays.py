//https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
class Solution:
    # Function to check if two arrays are equal or not.
    def checkEqual(self, a, b) -> bool:
        #code here
        if len(a) != len(b):
            return False

        freq = {}

        for num in a:
            freq[num] = freq.get(num, 0) + 1
        
        for num in b:
            if num not in freq:
                return False
            freq[num] -= 1
            if freq[num] == 0:
                del freq[num]

        return len(freq) == 0
