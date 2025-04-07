//https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
class Solution:
    # Function to count nodes of a linked list.
    def getCount(self, head):
        count = 0
        current = head
        while current:
            count += 1
            current = current.next
        return count
