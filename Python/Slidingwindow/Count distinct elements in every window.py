//https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1
class Solution:
    def countDistinct(self, arr, k):
        # Code here
        result = []
        freq = {}
        i = 0

        for j in range(len(arr)):
            freq[arr[j]] = freq.get(arr[j], 0) + 1

            if j - i + 1 == k:
                result.append(len(freq))

                # Slide the window
                freq[arr[i]] -= 1
                if freq[arr[i]] == 0:
                    del freq[arr[i]]
                i += 1

        return result
