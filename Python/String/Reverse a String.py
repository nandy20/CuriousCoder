//https://www.geeksforgeeks.org/problems/reverse-a-string/1
class Solution:
    def reverseString(self, s: str) -> str:
        # Convert the string to a list to modify it
        s = list(s)
        i, j = 0, len(s) - 1
        
        while i <= j:
            # Swap the characters
            s[i], s[j] = s[j], s[i]
            i += 1
            j -= 1
            
        # Convert the list back to a string
        return ''.join(s)
