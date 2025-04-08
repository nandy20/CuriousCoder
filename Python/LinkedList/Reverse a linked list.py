//https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1
class Solution:
    def reverseList(self, head):
        # Code here
        temp = None
        temp1 = head
        while temp1 is not None:
            temp2 = temp1.next
            temp1.next = temp
            temp = temp1
            temp1 = temp2
        return temp
