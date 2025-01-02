// Solution to  https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
class Solution {
    public static boolean checkEqual(int[] a, int[] b) {
        if(a.length!=b.length){
            return false;
        }
        Arrays.sort(a);
        Arrays.sort(b);
        for(int i=0;i<a.length;i++){
	        if(a[i]!=b[i]){
	            return false;
	        }
	    }
	    return true;
    }
}
