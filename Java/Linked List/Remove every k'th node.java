//https://www.geeksforgeeks.org/problems/remove-every-kth-node/1
class Solution {
    /*You are required to complete this method*/
    Node deleteK(Node head, int k) {
        // Your code here
        if (k == 1) return null; // Delete every node
        if (k == 0 || head == null) return head; // Invalid k or empty list

        Node current = head;
        int count = 1;

        while (current != null && current.next != null) {
            if ((count + 1) % k == 0) {
                // delete k-th node (which is current.next)
                current.next = current.next.next;
                count++; // Skip deleted node in count
            } else {
                current = current.next;
                count++;
            }
        }

        return head;
    }
}
