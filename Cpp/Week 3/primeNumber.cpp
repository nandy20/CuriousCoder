#include <iostream>
using namespace std;
int main() {
    int n=9, flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 1;
        }
    }
    if(flag==0){
        cout<<"Prime number";
    } else{
        cout<<"Not a Prime number";
    }
    return 0;
}
