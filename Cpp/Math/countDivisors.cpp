//https://www.geeksforgeeks.org/problems/number-of-divisors1631/1?
class Solution {
  public:
    int countDivisors(int n) {
        // Code here.
        int count=0;
        for(int i=1; i<=sqrt(n); i++){
             int k=n/i;
             if(n%i==0){
                if(i%3==0){
                    count++;
                    //  System.out.println(i);
                }
                if(k%3==0 && k!=i){  
                    // System.out.println(k);
                    count++;
                }
                
             }
            
        }
        return count;
    }
};
