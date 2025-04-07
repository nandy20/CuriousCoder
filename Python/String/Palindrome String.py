//https://www.geeksforgeeks.org/problems/palindrome-string0817/1
class Solution:
    def isPalindrome(self, s: str) -> bool:
        st, ed = 0, len(s) - 1
        
        while st < ed:
            if not s[st].isalnum():
                st += 1
                continue
            if not s[ed].isalnum():
                ed -= 1
                continue
            
            if s[st].lower() != s[ed].lower():
                return False
            
            st += 1
            ed -= 1
            
        return True
