class Solution:
    def insertAtBegining(self, head, x):
        # Your code here
        newnode = ListNode(x)
        if head is None:
            return newnode
        newnode.next = head
        return newnode
