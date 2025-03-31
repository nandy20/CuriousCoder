//https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1
class Solution {
  public:
    int missingNumber(vector<int>& a) {
        // code here
        int n = a.size();
        // if(n==1){
        //     return (a[0]==1) ? 2 : 1;
        // }
        sort(a.begin(),a.end());
        int i=0,j=n-1;
        while(i<j){
            int mid=(i+j)/2;
            if(a[mid]==mid+1){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        if(j+1 == a[n-1]){
            return n+1;
        }
        return j+1;
    }
};
