//https://www.geeksforgeeks.org/problems/ceil-the-floor2802/0
int ceilvalue(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return a[i];
        }
        if(a[i]>x){
            return a[i];
        }
    }
    return -1;
}
int floorvalue(int a[],int n,int x){
    for(int i=n-1;i>=0;i--){
        if(a[i]==x){
            return a[i];
        }
        if(a[i]<x){
            return a[i];
        }
        
    }
    return -1;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    return{floorvalue(arr,n,x),ceilvalue(arr,n,x)};
}
