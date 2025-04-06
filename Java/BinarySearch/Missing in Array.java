//http://geeksforgeeks.org/problems/missing-number-in-array1416/1
int n = a.length;

        // Sort the array
        Arrays.sort(a);

        int i = 0, j = n - 1;

        // Binary search to find the missing number
        while (i < j) {
            int mid = (i + j) / 2;
            if (a[mid] == mid + 1) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }

        // If the last element matches the expected value, return n + 1
        if (j + 1 == a[n - 1]) {
            return n + 1;
        }
        return j + 1;
