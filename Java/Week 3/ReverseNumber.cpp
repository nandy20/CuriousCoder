// Reverse a given number
class ReverseNumber {
    public static void main(String[] args) {
       int n=23423573, revN = 0;
        while(n>0){
            int ld = n%10;
            revN = revN *10 + ld;
            n=n/10;
        }
        System.out.println(revN);
    }
}
