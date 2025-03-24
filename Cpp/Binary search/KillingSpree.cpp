class Solution {
public:
    long long int killinSpree(long long int n)
    {
        // Code Here
        long long  int i=1, j=n,sum=0,mid=0,res=0, ans = 0;
        j=(sqrt(n));
        while(i<=j){
            mid=i+((j-i)/2);
            sum=((mid*((mid+1)*((2*(mid))+1)))/6);
            if(sum>n){
                j=mid-1;
            }
            else{
               ans = mid;
                i=mid+1;
            }
        }
        return ans;
    }
};
