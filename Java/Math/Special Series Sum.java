//https://www.geeksforgeeks.org/problems/special-series-sum0903/1
class Solution {
    static long sumOfTheSeries(long n){
        // code here
        long termSum=0, totalSum=0;
        for(int i=1; i<=n; i++){
            termSum=termSum+i;
            totalSum=totalSum+termSum;
        }
        return totalSum;
    }
}
