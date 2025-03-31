//https://leetcode.com/problems/first-bad-version/description/
class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1, h = n ,ans = -1;
        while(l<=h){
            int mid = l+((h-l)/2);
            if(isBadVersion(mid)){
                ans = mid;
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};
