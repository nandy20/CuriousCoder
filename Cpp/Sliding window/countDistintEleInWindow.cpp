// Problem - https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
vector <int> countDistinct (int a[], int n, int k)
    {
        //code here.
        int i=0,j=0;
        map<int,int>m;
        vector<int>vec;
        while(j<n){
            m[a[j]]++;
            if(j-i+1==k){
                vec.push_back(m.size());
                m[a[i]]--;
                if(m[a[i]]==0){
                    m.erase(a[i]);
                }
                i++;
            }
            j++;
        }
        return vec;
    }
