#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int a[n];
    // i =0, a[0] =2, i=1 a[1]=32 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
          sum = sum+a[i];
       }
       cout<<sum;
    return 0;
}
