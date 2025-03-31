//https://www.geeksforgeeks.org/problems/count-squares3649/1
class Solution {
  public:
    int countSquares(int n) {
        int sum=0;
        for(int i=1;i<=sqrt(n);i=i+1){
            if(i*i<n){
                
                sum++;
            }
            else{
                break;
            }
        }
        return sum;
        // code here
    }
};
