class Solution {
public:
    int getdays(vector<int>&weights,int cap){
        int days=1,n=weights.size(),sum=0;
        for(int i=0;i<n;i++){
            if(sum+weights[i]<=cap){
                 sum+=weights[i];
            }
            else{
               sum=weights[i];
                days++;
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=weights[0],high=0,n=weights.size();
        for(int i=0;i<n;i++){
            low=max(weights[i],low);
            high+=weights[i];
        }
        int ans=low;
        while(low<=high){
            int mid=(low+high)/2;
            int day=getdays(weights,mid);
            if(day<=days){
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
