//https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1
class Solution {
  public:
    int findMin(vector<int>& nums) {
        // complete the function here
        int n=nums.size();
        int l=0;
        int r=n-1;
        
        while(l < r){
            if(nums[l] < nums[r]){
                return nums[l];
            }
            
            int mid = (l+r)/2;
            
            if(nums[mid] > nums[r]){
                l = mid+1;
            }
            
            else {
                r = mid;
            }
        }
        
        return nums[l];
        
    }
};
