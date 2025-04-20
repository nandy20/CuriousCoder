//https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
class Solution {
    ArrayList<Integer> countDistinct(int arr[], int k) {
        // code here
        ArrayList<Integer> result = new ArrayList<>();
        Map<Integer, Integer> map = new HashMap<>();
        int i = 0, j = 0;

        while (j < arr.length) {
            map.put(arr[j], map.getOrDefault(arr[j], 0) + 1);

            if (j - i + 1 == k) {
                result.add(map.size());

                // Slide the window
                map.put(arr[i], map.get(arr[i]) - 1);
                if (map.get(arr[i]) == 0) {
                    map.remove(arr[i]);
                }
                i++;
            }
            j++;
        }
        return result;
    }
}
