//https://www.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> a, vector<ll> b, int n) {
        //code here
        map<int,int> m;
        priority_queue<int> g;
        priority_queue<int> g1;
        for(int i=0;i<n;i++){
            g.push(a[i]);
        }
        for(int i=0;i<n;i++){
           g1.push(b[i]);
        }
        while(!g.empty() && !g1.empty()){
            int x=g.top();
            int y=g1.top();
            g.pop();
            g1.pop();
            if(x!=y){
                return false;
            }
        }
        return true;
    }
};
