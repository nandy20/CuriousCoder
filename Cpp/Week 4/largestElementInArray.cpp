#include <iostream>
using namespace std;

// Gets input from user and finds the largest element in the array
int main() {
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int large = a[0];
    for(int i=0;i<n;i++){
           if(large<a[i]){
               large= a[i];
           }
       }
       cout<<large;
    return 0;
}
