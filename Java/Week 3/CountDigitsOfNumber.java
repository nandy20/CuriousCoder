// Iterates through the digits in a number and prints the cout
class CountDigitsOfNumber {
    public static void main(String[] args) {
        int n=23423573, count = 0;
        while(n>0){
            int ld = n%10;
            count = count + 1;
            n=n/10;
        }
        System.out.println(count);
    }
}

// ld -> 0 to 9

