//https://www.geeksforgeeks.org/problems/prime-number2314/1
class Solution {
    static boolean isPrime(int n) {
        // code here
        if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
    }
}
