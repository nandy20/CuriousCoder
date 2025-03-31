//https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution {
  public:
    bool isPrime(int n) {
        // code here
         for(int i=2;i<n;i++){
            if(n%i==0 || n==1){
                return false;
                break;
            }
        }
        return true;
    }
};
