//https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1

int smallest(int a[],int n,int min){
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<res && a[i]!=min){
            res=a[i];
        }
    }
    return res;
}

vector<int> minAnd2ndMin(int a[], int n) {
    int min1=smallest(a,n,INT_MAX);
    int min2=smallest(a,n,min1);
    vector<int> vec;
    if(min1==INT_MAX || min2==INT_MAX){
        return {-1,-1};
    }
    else{
        vec.push_back(min1);
        vec.push_back(min2);
    }
    return vec;
}
