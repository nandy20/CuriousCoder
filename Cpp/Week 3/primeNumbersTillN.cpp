// Prints all the prime numbers from 1 to till n
#include <iostream>
using namespace std;
int main() {
    int n=9;
    for(int x=2;x<=n;x++){
        int flag = 0;
        for(int i=2;i<x;i++){
            if(x%i==0){
                flag = 1;
            }
        }
        if(flag==0){
            cout<<x << endl;
        }
    }
    
    
    return 0;
}
