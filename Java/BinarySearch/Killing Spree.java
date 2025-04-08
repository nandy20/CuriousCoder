//https://www.geeksforgeeks.org/problems/killing-spree3020/0
class Solution
{
    long killinSpree(long n)
    {
        // Code Here
        long i = 1, j = (long) Math.sqrt(n);
        long ans = 0;
        
        while (i <= j) {
            long mid = i + (j - i) / 2;
            long sum = (mid * (mid + 1) * (2 * mid + 1)) / 6;
            
            if (sum > n) {
                j = mid - 1;
            } else {
                ans = mid;
                i = mid + 1;
            }
        }
        return ans;
    }
}
