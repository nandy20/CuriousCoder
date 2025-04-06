//https://www.geeksforgeeks.org/problems/count-squares3649/1
class Solution {
    static int countSquares(int n) {
        // code here
        int sum = 0;
    for (int i = 1; i <= Math.sqrt(n); i++) {
        if (i * i < n) {
            sum++;
        } else {
            break;
        }
    }
    return sum;
    }
}
