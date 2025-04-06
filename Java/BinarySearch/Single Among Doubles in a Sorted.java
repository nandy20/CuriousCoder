//https://www.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1
class Solution {
    int findOnce(int[] arr) {
        // Complete this function
        int ans=0;

for(int i=0;i<arr.length;i++){

ans=ans^arr[i]; // using xor operation

}

return ans;
    }
}
