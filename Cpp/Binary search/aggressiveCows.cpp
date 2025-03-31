//https://www.geeksforgeeks.org/problems/aggressive-cows/0
class Solution {
  public:

    bool canPlaceCows(vector<int> &stalls, int k, int dist) {
    int count = 1;  // First cow placed in the first stall
    int lastPos = stalls[0]; // Position of the last placed cow

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= dist) {  // Place cow if distance is valid
            count++;
            lastPos = stalls[i]; // Update last placed cow position
            if (count == k) return true; // All cows placed successfully
        }
    }
    return false; // Not enough cows placed
}

// Function to find the largest minimum distance
    int aggressiveCows(vector<int> &stalls, int k) {
    sort(stalls.begin(), stalls.end()); // Sorting stall positions

    int low = 1, high = stalls.back() - stalls.front(); // Possible distances
    int ans = 0;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2; // Try mid as min distance

        if (canPlaceCows(stalls, k, mid)) 
        {
            ans = mid;  // Update answer to mid
            low = mid + 1; // Try for a larger distance
        } 
        else 
        {
            high = mid - 1; // Reduce search space
        }
    }
    return ans;
}
};
