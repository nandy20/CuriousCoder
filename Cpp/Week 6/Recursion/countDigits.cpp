// Count the number of digits in a number recursively

int countDigits(int n){
    if(n==0){
        return 0;
    }
    return 1 + countDigits(n/10);
}

int main() {
    cout<<countDigits(300409);
    return 0;
}
