//https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1
class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
         int sum=0;
        while(n>0){
            
            sum = sum+(n*n*n);
            n--;
        }
        return sum;
    }
};
