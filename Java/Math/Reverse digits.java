//https://www.geeksforgeeks.org/problems/reverse-digit0316/1
class Solution {
    public int reverseDigits(int n) {
        // Code here
        int x=0;
        while(n>0){
            if(n%10>0){
                x=x*10+(n%10);
            }
            n=n/10;
        }
        return x;
    }
}
