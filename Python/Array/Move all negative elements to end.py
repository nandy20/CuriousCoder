//https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
class Solution:
    def segregateElements(self, arr):
        # Your code goes here
        pos = []
        neg = []
        for num in arr:
            if num >= 0:
                pos.append(num)
            else:
                neg.append(num)
        
        # Combine them back into the original array
        for i in range(len(pos)):
            arr[i] = pos[i]
        for i in range(len(neg)):
            arr[len(pos) + i] = neg[i]
