//https://www.geeksforgeeks.org/problems/find-n-th-term-of-series-1-3-6-10-15-215506/1
class Solution {
  public:
    int findNthTerm(int n) {
        // code here
        int x = 1,sum=0;
        for(int i=1;i<=n;i++){
            sum = sum+ (x);
            x++;
        }
        return sum;
    }
};
