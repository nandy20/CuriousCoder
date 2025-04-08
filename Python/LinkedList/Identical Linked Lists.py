//https://www.geeksforgeeks.org/problems/identical-linked-lists/1
class Solution:
    #Function to check whether two linked lists are identical or not.
    def areIdentical(self, head1, head2):
        # Code here
        while head1 and head2:
            if head1.data != head2.data:
                return False
            head1 = head1.next
            head2 = head2.next
        
        # If both are None at the end, they are identical
        return head1 is None and head2 is None
