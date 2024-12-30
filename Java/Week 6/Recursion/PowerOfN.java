
class PowerOfN {
    static int func(int n, int m){
    if(m==0){
        return 1;
    }
    return n * func(n,m-1);
}
    public static void main(String[] args) {
        System.out.println(func(3,3));
    }
}
