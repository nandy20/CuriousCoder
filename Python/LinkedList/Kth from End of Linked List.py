//https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
class Solution:
    def getKthFromLast(self, head, k):
        #code here
        total = 0
        temp = head
        while temp:
            total += 1
            temp = temp.next
        
        # If k is greater than the number of nodes, return -1
        if k > total:
            return -1
        
        # Find the (total - k)th node
        x = total - k
        temp = head
        while x > 0:
            temp = temp.next
            x -= 1
        
        return temp.data
