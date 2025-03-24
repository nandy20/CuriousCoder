class Solution {
  public:
  long long gettime(vector<int> a,int n,int times,int k){
        long long  sum=0,paint=1;
        for(long long i=0;i<n;i++){
            if(sum+a[i]>times){
                paint++;
                sum=a[i];
            }
            else{
                sum+=(a[i]);
            }
        }
        return paint;
    }
   
    int minTime(vector<int>& arr, int k) {
        // code here
        // return minimum time
        int low=0,high=0, n=arr.size();
        for(int i=0;i<n;i++){
            low=max(low,arr[i]);
            high+=arr[i];
        }
        long long ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            
            long long paint=gettime(arr,n,mid,k);
            if(paint<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
