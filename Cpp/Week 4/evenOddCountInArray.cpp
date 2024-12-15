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
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
         if(a[i]%2==0){
             even++;
         } else{
             odd++;
         }
       }
       cout<<even << endl << odd;
    return 0;
}
