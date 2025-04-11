//https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1
class Solution {
    int smallest(int a[],int n,int min){
        int res=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]<res && a[i]!=min){
                res=a[i];
            }
        }
        return res;
    }
    public int[] minAnd2ndMin(int a[]) {
        // code here
        int n = a.length;
        int min1=smallest(a,n,Integer.MAX_VALUE);
        int min2=smallest(a,n,min1);
        if(min1==Integer.MAX_VALUE || min2==Integer.MAX_VALUE){
             return new int[] {-1,-1};
        }
        return new int[] {min1,min2};
    }
}
