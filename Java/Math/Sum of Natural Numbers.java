//https://www.geeksforgeeks.org/problems/sum-of-series2811/1
class Solution {
    public static int seriesSum(int n) {
        // code here
        int sum=0;
        while(n>0){
            sum=n+sum;
            n--;
        }
        return sum;
    }
}
