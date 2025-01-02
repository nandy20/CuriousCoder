https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
// Using extra space
    void segregateElements(vector<int>& arr) {
        // 
        vector<int> pos , neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
             else{
                 pos.push_back(arr[i]);
             }
        }
        int j=0;
        for(int i=0;i<pos.size();i++){
            arr[j] = pos[i];
            j++;
        }
        for(int i=0;i<neg.size();i++){
            arr[j] = neg[i];
            j++;
        }
    }
