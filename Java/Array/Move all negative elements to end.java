//https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
class Solution {
    public void segregateElements(int[] arr) {
        // Your code goes here
        List<Integer> pos = new ArrayList<>();
    List<Integer> neg = new ArrayList<>();

    // Separate positive and negative elements
    for (int num : arr) {
        if (num < 0) {
            neg.add(num);
        } else {
            pos.add(num);
        }
    }

    // Merge them back into the original array
    int j = 0;
    for (int num : pos) {
        arr[j++] = num;
    }
    for (int num : neg) {
        arr[j++] = num;
    }
    }
}
