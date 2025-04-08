class Solution:
    def sortedInsert(self, head, data):
        # Code here
        newnode = ListNode(data)
        
        if head is None or head.data > data:
            newnode.next = head
            return newnode
        
        temp = head
        while temp.next is not None and temp.next.data < data:
            temp = temp.next
        
        newnode.next = temp.next
        temp.next = newnode
        return head
