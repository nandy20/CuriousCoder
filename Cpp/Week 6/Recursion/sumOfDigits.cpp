// Find the sum of digits in a number recursively

int sumOfDigits(int n){
    if(n==0){
        return 0;
    }
    return (n%10) + sumOfDigits(n/10);
}

int main() {
    cout<<sumOfDigits(300409);
    return 0;
}
