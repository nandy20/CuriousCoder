//https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
class Solution:
    
    #Function to rotate a linked list.
    def rotate(self, head, k):
        # code here
        if not head or not head.next or k == 0:
            return head
        
        length = 1
        temp = head
        while temp.next:
            temp = temp.next
            length += 1
        
        k = k % length
        if k == 0:
            return head
            
        temp.next = head
        
        newTail = head
        for i in range(1, k):
            newTail = newTail.next
        
        newHead = newTail.next
        newTail.next = None # breaking the circular connection
        return newHead
