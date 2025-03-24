class Solution{
    public:
    int checkheight(int tree[],int n,int h){
        int wood=0;
        for(int i=0;i<n;i++){
            if(tree[i]>h){
                wood+=tree[i]-h;
            }
        }
        return wood;
    }
    int find_height(int tree[], int n, int k)
    {
         
          int low=0,high=tree[0];
          int ans;
          for(int i=0;i<n;i++){
              high=max(high,tree[i]);
          }
          while(low<=high){
              int mid=(low+high)/2;
             int wood=checkheight(tree,n,mid);
             if(wood==k){
                 return mid;
             }
             else if(wood<k){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
          }
          return -1;
    }
};
