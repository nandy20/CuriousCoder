//https://www.geeksforgeeks.org/problems/palindrome-string0817/1
class Solution {
    boolean isPalindrome(String s) {
        // code here
        int st = 0, ed = s.length() - 1;

        while (st < ed) {
            while (st < ed && !Character.isLetterOrDigit(s.charAt(st))) {
                st++;
            }
            while (st < ed && !Character.isLetterOrDigit(s.charAt(ed))) {
                ed--;
            }

            if (Character.toLowerCase(s.charAt(st)) != Character.toLowerCase(s.charAt(ed))) {
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
};
