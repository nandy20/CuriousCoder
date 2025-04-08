//https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1
class Solution:
    def insertInMiddle(self, head, x):
        #code here
        new_node = Node(x)
        
        if head is None:
            head = new_node
            return new_node
            
        
        slow = head
        fast = head
        
        while fast and fast.next and fast.next.next:
            slow = slow.next
            fast = fast.next.next 
        new_node.next = slow.next
        slow.next = new_node
        
        return head
