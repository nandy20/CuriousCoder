//https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
class Solution {
    
    public static int unionArray(int []b,int[] res, int k){
        int m = b.length;
        for(int i=0;i<m;i++){
           int flag = 1;
           for(int j=0;j<k;j++){
               if(b[i]==res[j]){
                   flag = 0;
                   break;
               }
           }
           if(flag ==1){
               res[k]=b[i];
               k++;
           }
       }
       return k;
    }
    public static int findUnion(int a[], int b[]) {
        // code here
        int n = a.length;
       int m = b.length;
       int k=0;
       int [] res = new int[n+m];
       k = unionArray(a,res,k);
       k = unionArray(b,res,k);
       return k;
    }
}
