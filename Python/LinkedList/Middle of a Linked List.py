//https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
class Solution:
    #  Should return data of middle node. If linked list is empty, then  -1
    def getMiddle(self, head):
        # Code here
        # return the value stored in the middle node
        if head is None:
            return -1
        
        slow = head
        fast = head.next

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        if fast is None:
            return slow.data
        else:
            return slow.next.data
