//https://www.geeksforgeeks.org/problems/binary-search-in-forest--141631/1
class Solution:
    def checkheight(self, tree, n, h):
        wood = 0
        for i in range(n):
            if tree[i] > h:
                wood += tree[i] - h
        return wood

    def find_height(self, tree, n, k):
        low, high = 0, max(tree)
        
        while low <= high:
            mid = (low + high) // 2
            wood = self.checkheight(tree, n, mid)
            if wood == k:
                return mid
            elif wood < k:
                high = mid - 1
            else:
                low = mid + 1
                
