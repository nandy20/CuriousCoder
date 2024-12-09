// In GeekforGeeks
https://www.geeksforgeeks.org/problems/print-the-kth-digit3520/0
class Solution{
public:
    int kthDigit(int A,int B,int k){
        // code here
        long long power=pow(A,B);
        int i=1;
        
        while(power>0){
            int ans=power%10;
            if(k==i){
                return ans;
            }
            i++;
            power=power/10;
        }
        return 0;
    }
};

In Online compilers 

#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int A=3, B=3, k=1;
    long long power=pow(A,B);
        int i=1;
        
        while(power>0){
            int ans=power%10;
            if(k==i){
                cout<< ans;
            }
            i++;
            power=power/10;
        }
    return 0;
}
