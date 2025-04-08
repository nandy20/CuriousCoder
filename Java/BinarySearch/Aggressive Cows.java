//https://www.geeksforgeeks.org/problems/aggressive-cows/0
class Solution {
    public static int aggressiveCows(int[] stalls, int k) {
        Arrays.sort(stalls);  // Sort stall positions

        int low = 1, high = stalls[stalls.length - 1] - stalls[0];  // Possible distances
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;  // Try mid as minimum distance

            if (canPlaceCows(stalls, k, mid)) {
                ans = mid;  // Update answer to mid
                low = mid + 1;  // Try for a larger distance
            } else {
                high = mid - 1;  // Reduce search space
            }
        }
        return ans;
    }

    private static boolean canPlaceCows(int[] stalls, int k, int dist) {
        int count = 1;  // First cow placed in the first stall
        int lastPos = stalls[0];  // Position of the last placed cow

        for (int i = 1; i < stalls.length; i++) {
            if (stalls[i] - lastPos >= dist) {  // Place cow if distance is valid
                count++;
                lastPos = stalls[i];  // Update last placed cow position
                if (count == k) return true;  // All cows placed successfully
            }
        }
        return false;  // Not enough cows placed
    }
}
