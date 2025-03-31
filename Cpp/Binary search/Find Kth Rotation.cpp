//https://www.geeksforgeeks.org/problems/rotation4723/1
class Solution {
  public:
    int findKRotation(vector<int> &a) {
        // Code Here
        int n=a.size();
        int l=0, h=n-1, ans = 0;
        while(l<=h){
            int mid = l+((h-l)/2);
            int i = (mid-1+n)%n;
            int j = (mid+1)%n;
            if(a[mid]<a[i] && a[mid]<a[j]){
                return mid;
            }
            if(a[h]>a[mid]){
                h=mid-1;
            }else{
                ans = mid;
                l=mid+1;
            }
        }
        return ans;
        
    }
};
