//https://www.geeksforgeeks.org/problems/sum-of-fifth-powers-of-the-first-n-natural-numbers3415/1
class Solution {
  public:
    long long sumOfFifthPowers(long long N) {
        // code here
         long long sum = 0;
        for(int i = 1; i <= N; i++){
            sum += (long)pow(i, 5);
        }
        return sum;
    }
};
