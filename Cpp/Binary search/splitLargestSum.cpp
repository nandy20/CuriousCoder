class Solution {
public:
 int getSplit(vector<int>&arr,int cap){
        int days=1,n=arr.size(),sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]<=cap){
                 sum+=arr[i];
            }
            else{
               sum=arr[i];
                days++;
            }
        }
        return days;
    }
    
    int splitArray(vector<int>& arr, int k) {
        int low=arr[0],high=0,n=arr.size();
        for(int i=0;i<n;i++){
            low=max(arr[i],low);
            high+=arr[i];
        }
        int ans=low;
        while(low<=high){
            int mid=(low+high)/2;
            int split=getSplit(arr,mid);
            if(split<=k){
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
