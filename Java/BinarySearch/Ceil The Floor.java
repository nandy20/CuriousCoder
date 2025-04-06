//https://www.geeksforgeeks.org/problems/ceil-the-floor2802/0
class Solution {
    public int[] getFloorAndCeil(int x, int[] arr) {
        Arrays.sort(arr);  // Sort the array
        
        int floor = findFloor(arr, x);
        int ceil = findCeil(arr, x);
        
        return new int[] { floor, ceil };
    }
    
    // Function to find the floor value
    private int findFloor(int[] arr, int x) {
        int i = 0, j = arr.length - 1;
        if (arr[0] > x) return -1;  // No floor value exists
        
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid] == x) return arr[mid];
            else if (arr[mid] > x) j = mid - 1;
            else i = mid + 1;
        }
        
        return arr[j];  // Floor value
    }
    
    // Function to find the ceil value
    private int findCeil(int[] arr, int x) {
        int i = 0, j = arr.length - 1;
        if (arr[arr.length - 1] < x) return -1;  // No ceil value exists
        
        while (i <= j) {
            int mid = (i + j) / 2;
            if (arr[mid] == x) return arr[mid];
            else if (arr[mid] > x) j = mid - 1;
            else i = mid + 1;
        }
        
        return arr[i];
