//https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1
class Solution {
    Node sortedMerge(Node head1, Node head2) {
        // code here
        if (head1 == null) return head2;
        if (head2 == null) return head1;
        
        // Initialize the merged list and the pointer
        Node head3 = null, temp3 = null;
        
        // Choose the smaller of the two heads to start the merged list
        if (head1.data < head2.data) {
            head3 = head1;
            temp3 = head1;
            head1 = head1.next;
        } else {
            head3 = head2;
            temp3 = head2;
            head2 = head2.next;
        }

        // Merge the two lists
        while (head1 != null && head2 != null) {
            if (head1.data < head2.data) {
                temp3.next = head1;
                temp3 = temp3.next;
                head1 = head1.next;
            } else {
                temp3.next = head2;
                temp3 = temp3.next;
                head2 = head2.next;
            }
        }

        // Append the remaining elements if any
        if (head1 != null) {
            temp3.next = head1;
        } else if (head2 != null) {
            temp3.next = head2;
        }

        return head3;
    }
}
