// Find factorial of a number
#include <iostream>
using namespace std;
int main() {
     int fact=1, n =5 ;
     for(int i=1;i<=n;i++){
         fact = fact * i;
     }
     cout<<fact;
    return 0;
}
