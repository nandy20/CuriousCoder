//https://leetcode.com/problems/rotate-string/
class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        for i in range(1, len(s) + 1):
            var = s[i:] + s[:i]
            if var == goal:
                return True
        return False
