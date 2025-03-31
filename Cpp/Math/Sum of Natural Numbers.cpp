//https://www.geeksforgeeks.org/problems/sum-of-series2811/1
class Solution {
  public:
    int seriesSum(int n) {
        // code here
        long sum=0;
        while(n>0){
            sum=n+sum;
            n--;
        }
        return sum;
    }
};
