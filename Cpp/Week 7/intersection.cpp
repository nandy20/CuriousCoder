class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    int flag = 1;
                    for(int k=0;k<res.size();k++){
                        if(nums1[i]==res[k]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag==1){
                        res.push_back(nums1[i]);
                    }
                }
            }
        }
        return res;
    }
};
