//https://www.geeksforgeeks.org/problems/middle-of-three2926/1
class Solution {
  public:
    int middle(int A, int B, int C) {
        // code here
        if (A>B && A>C){
            return B>C ? B:C;
        }
        else if (B>A && B>C){
            return A>C ? A:C;
        }
        else{
             return A>B ? A:B;
        }
    }
};
