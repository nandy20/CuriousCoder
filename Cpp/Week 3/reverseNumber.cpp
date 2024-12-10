// Reverse the given number
#include <iostream>
using namespace std;
int main() {
     int n=23423573, revN = 0;
        while(n>0){
            int ld = n%10;
            revN = revN *10 + ld;
            n=n/10;
        }
    cout << revN;
    return 0;
}
