//https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
vector<int> occurence(int a[],int n,int x,bool first){
    int i=0,j=n-1,ans=-1;
    while(i<=j){
       int mid=(i+j)/2;
       if(a[mid]==x){
           ans=mid;
           if(first){
               j=mid-1;
           }
           else{
              
               i=mid+1;
           }
       }
       else if(a[mid] > x){
            j=mid-1;
       }
       else{
           i=mid+1;
       }
    }
    return {ans};
}
