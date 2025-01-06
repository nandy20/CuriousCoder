vector<int> findDuplicates(vector<int>& arr) {
        // code here
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            int count =1;
            for(int j=0;j<arr.size();j++){
                if(arr[i] == arr[j] && j!=i){
                    count++;
                }
            }
            if(count>1){
                int flag = 1;
               for(int k=0;k<res.size();k++){
                   if(res[k]==arr[i]){
                       flag = 0;
                       break;
                   }
               }
               if(flag ==1){
                   res.push_back(arr[i]);
               }
            }
        }
        return res;
    }
