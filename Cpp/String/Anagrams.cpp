//https://www.geeksforgeeks.org/problems/anagram-1587115620/1
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int freq[258] = {0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]]+=1;
        }
        for(int i=0;i<s2.length();i++){
            freq[s2[i]]-=1;
        }
        for(int i=0;i<257;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        return true;
        
    }
};
