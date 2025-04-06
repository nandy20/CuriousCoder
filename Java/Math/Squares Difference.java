//https://www.geeksforgeeks.org/problems/squares-difference0939/1
class Solution {
    static long squaresDiff(int N) {
        long sumOfSquares = (long) N * (N + 1) * (2L * N + 1) / 6;
        long squareOfSum = (long) (N * (N + 1) / 2);
        squareOfSum *= squareOfSum;
        
        return Math.abs(sumOfSquares - squareOfSum);
    }
}
