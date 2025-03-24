int findMin(vector<int>& a) {
        int n=a.size();
        int l=0, h=n-1;
        while(l<=h){
            int mid = l+((h-l)/2);
            int i = (mid-1+n)%n;
            int j = (mid+1)%n;
            if(a[mid]<a[i] && a[mid]<a[j]){
                return a[mid];
            }
            if(a[h]>a[mid]){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return a[0];
    }
