//https://www.geeksforgeeks.org/problems/palindrome0746/1
class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        int temp=n;
        int sum=0;
        while(n>0){
            int rev=n%10;
            sum=sum*10+rev;
            n=n/10;
        }
        return (temp==sum);
        
    }
};
