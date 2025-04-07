//https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
class Solution:
    def findDuplicates(self, arr):
        # code here
        res = []
        for i in range(len(arr)):
            count = 1
            for j in range(len(arr)):
                if arr[i] == arr[j] and j != i:
                    count += 1
            if count > 1:
                if arr[i] not in res:
                    res.append(arr[i])
        return res
