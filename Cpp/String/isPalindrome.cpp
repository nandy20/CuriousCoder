https://www.geeksforgeeks.org/problems/palindrome-string0817/1//
class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
         int st =0,ed = s.length()-1;
        
        while(st <ed){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[ed])){
                ed--;
                continue;
            }
            
            if(tolower(s[st]) != tolower(s[ed])){
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
};
