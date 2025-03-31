//https://www.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1
class Solution {
  public:
    int removeDuplicates(vector<int> &a) {
        // code here
         vector<int> vec;
         int j=0;
        int n=a.size();
        for(int i=0;i<n-1;i++){
            if(a[i]!=a[i+1]){
                a[j]=a[i];
                j++;
            }
        }
        a[j]=(a[n-1]);
        // for(int i=0;i<vec.size();i++){
        //     a[i] = vec[i];
        // }
        return j+1;
    }
};
