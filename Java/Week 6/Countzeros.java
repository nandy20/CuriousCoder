class Countzeros {

  // Count the number of zeros in a number recursively
    static int countzero(int n){
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
    public static void main(String[] args) {
        System.out.println(countzero(300403));
    }
}
