//https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
       set<int> s;
       for(int i=0;i<n;i++){
           s.insert(a[i]);
       }
       for(int j=0;j<m;j++){
           s.insert(b[j]);
       }
       return s.size();
    }
};
