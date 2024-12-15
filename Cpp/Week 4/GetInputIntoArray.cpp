#include <iostream>
using namespace std;
int main() {
    int n ;
    cin>>n;
    int arr[n];
    // i =0, a[0] =2, i=1 a[1]=32 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
