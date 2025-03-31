//https://www.geeksforgeeks.org/problems/special-series-sum0903/1
class Solution {
  public:
    long long int sumOfTheSeries(long long int n){
        // code here
         long long termSum=0, totalSum=0;
        for(int i=1; i<=n; i++){
            termSum=termSum+i;
            totalSum=totalSum+termSum;
        }
        return totalSum;
    }
};
