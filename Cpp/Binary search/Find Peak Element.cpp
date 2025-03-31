//https://leetcode.com/problems/find-peak-element/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       if(nums.size()==1){
            return 0;
        }
       int low=0,high=nums.size()-1, n=nums.size();
        while(low<high){
            int mid=low+((high-low)/2);
            if(mid==0){
                return nums[high]>nums[low] ? high :low;
            }
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
