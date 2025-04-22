//https://www.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1
class Solution:
    # Helper function to perform DFS and
    # store nodes at different horizontal distances
    def DFS(self, root, hd, mn, mp):
        if root is None:
            return

        # Store the current node in the map at horizontal distance hd
        if hd not in mp:
            mp[hd] = []
        mp[hd].append(root.data)

        # Update the minimum horizontal distance
        mn[0] = min(mn[0], hd)

        # Recursively traverse the left and right subtrees
        self.DFS(root.left, hd - 1, mn, mp)
        self.DFS(root.right, hd + 1, mn, mp)

    # Function to perform vertical order traversal of a binary tree
    def verticalOrder(self, root):
        # Dictionary to store nodes at each horizontal distance
        mp = {}

        # List to track the minimum horizontal distance (mutable)
        mn = [0]

        # Perform DFS to fill the dictionary with vertical levels
        self.DFS(root, 0, mn, mp)

        res = []
        hd = mn[0]

        # Traverse the dictionary from minimum to maximum horizontal distance
        while hd in mp:
            res.append(mp[hd])
            hd += 1

        return res
