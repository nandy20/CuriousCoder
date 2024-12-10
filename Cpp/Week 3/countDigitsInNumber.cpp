// Iterate through each number and print the count of the digits
#include <iostream>
using namespace std;
int main() {
     int n=23423573, count = 0;
        while(n>0){
            int ld = n%10;
            count = count + 1;
            n=n/10;
        }
    cout << count;
    return 0;
}
