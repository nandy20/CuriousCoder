// Count the number of zeros in a number recursively
int countzero(int n){
    if(n%10==n){
       if(n%10==0){
           return 1;
       } 
       return 0;
    }
    if(n%10==0){
        return 1+countzero(n/10);
    } else {
        return countzero(n/10);
    } 
}

int main() {
    cout<<countzero(300409);
    return 0;
}
