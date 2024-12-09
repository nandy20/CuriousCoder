// Prints digits of a number by traversing the number
#include <iostream>
using namespace std;
int main() {
    int n=2342342;
    while(n>0){
          int ld=n%10;
          cout<<(ld) << endl;
          n=n/10;
       }
    return 0;
}
