#include <iostream>
using namespace std;
int sumOfN(int n){
    if(n==0){
        return 0;
    }
    return n+ sumOfN(n-1);
}

int main() {
    cout<<sumOfN(5);
    return 0;
}
