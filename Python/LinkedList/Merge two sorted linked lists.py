//https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
class Solution:
    def sortedMerge(self,head1, head2):
        # code here
        if not head1:
            return head2
        if not head2:
            return head1

        if head1.data < head2.data:
            head3 = head1
            temp1 = head1.next
            temp2 = head2
        else:
            head3 = head2
            temp1 = head1
            temp2 = head2.next

        temp3 = head3

        while temp1 and temp2:
            if temp1.data < temp2.data:
                temp3.next = temp1
                temp1 = temp1.next
            else:
                temp3.next = temp2
                temp2 = temp2.next
            temp3 = temp3.next

        # Attach the remaining nodes
        if temp1:
            temp3.next = temp1
        elif temp2:
            temp3.next = temp2
            
        return head3;
