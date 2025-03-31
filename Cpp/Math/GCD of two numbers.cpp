//https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1
class Solution {
  public:
    int gcd(int a, int b) {
        // code here
         if(a ==0) return b;
        if(b== 0) return a;
        while(a!=b)
        {
            if(a>b) 
            a = a-b;
            if(b>a) 
            b = b-a;
            
        }
        return a;
    }
};
