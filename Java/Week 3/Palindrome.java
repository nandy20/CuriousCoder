class Palindrome {
    public static void main(String[] args) {
       int n = 523425, rev= 0;
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
