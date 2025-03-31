//https://www.geeksforgeeks.org/problems/special-odd-series-sum1235/1
class Solution {
  public:
    long long int sumOfTheSeries(long long int n){
        // code here
        long long sum=0;
        for(int i=1; i<=n; i++){
            sum = sum + (i*i);
        }
        return sum;
    }
};
