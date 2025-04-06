//https://www.geeksforgeeks.org/problems/second-largest3735/1
class Solution {
    public int getSecondLargest(int[] a) {
        // Code Here
        int max=-1;
        for(int i= 0; i<a.length;i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        int max2= -1;
        
        for(int i=0;i<a.length;i++){
            if(a[i]>max2 && a[i]!=max){
                max2=a[i];
            }
        }
       return max2;
    }
}
