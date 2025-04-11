//https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
class Solution {
    public Pair<Integer, Integer> getMinMax(int[] arr) {
        // Code Here
        int num1 = arr[0];
        int num2 = arr[0];
        
        for (int i = 0; i < arr.length; i++) {
            if (num1 > arr[i]) {
                num1 = arr[i];
            }
            if (num2 < arr[i]) {
                num2 = arr[i];
            }
        }
        
        return new Pair<>(num1, num2);
    }
}
