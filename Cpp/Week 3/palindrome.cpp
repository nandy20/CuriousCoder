class Main {
    public static void main(String[] args) {
       int n = 523425, rev= 0;
      // Assigning the value of n to x because we are going to update n to find the digits in it,
      // so once we are done with it, when we try to compare n with rev, then n will be 0 since we
      // updated n to find the digits in it.
       int x = n;
       while(n>0){
           rev=rev*10+(n%10);
           n=n/10;
       }
       if(rev==x){
           System.out.println("Palindrome");
       } else{
           System.out.println("Not Palindrome");
       }
    }
}
