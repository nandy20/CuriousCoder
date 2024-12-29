class CountDigits {

static int countDigits(int n){
    if(n==0){
        return 0;
    }
    return 1 + countDigits(n/10);
}


    public static void main(String[] args) {
        System.out.println(sumOfDigits(300403));
    }
}
