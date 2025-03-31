//https://leetcode.com/problems/merge-sorted-array/
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        vector<int> num3;
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(num1[i]<num2[j]){
                num3.push_back(num1[i]);
                i++;
            }else{
                 num3.push_back(num2[j]);
                j++;
            }
        }
        while(i<m){
            num3.push_back(num1[i]);
            i++;
        }
        while(j<n){
             num3.push_back(num2[j]);
            j++;
        }
        for(int i=0;i<n+m;i++){
            num1[i] = num3[i];
        }
    }
};
