//https://www.geeksforgeeks.org/problems/corner-digits1317/1
class Solution
{
    public int corner_digitSum(int n)
    {
        int sum = n%10, count = 0;
        while(n>0){
            if(n==n%10 && count>0){
                sum = sum+(n%10);
            }
            count++;
            n=n/10;
        }
        return sum;
    }
}
