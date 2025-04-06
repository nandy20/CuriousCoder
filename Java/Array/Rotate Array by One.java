//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
class Solution {
    public void rotate(int[] arr) {
        int i=0,j=arr.length - 1;
        
        int last = arr[j];
        
        while (i<j){
            arr[j] = arr[j-1];
            j--; 
        }
        arr[0]= last;
    }
}
