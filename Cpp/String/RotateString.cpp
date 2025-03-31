//https://leetcode.com/problems/rotate-string/description/
class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i=1;i<=s.length();i++){
        string var=s.substr(i,s.length()-i)+s.substr(0,i);
    
    if(var.compare(goal)==0){
      return true;
    }
   }
        return false;
    }
};
