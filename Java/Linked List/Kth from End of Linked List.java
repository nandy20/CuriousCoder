//https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
class Solution {

    // Function to find the data of kth node from
    // the end of a linked list.
    int getKthFromLast(Node head, int k) {
        // Your code here
        int total = 0;
        Node temp = head;

        // Step 1: Count total nodes
        while (temp != null) {
            total++;
            temp = temp.next;
        }

        // Step 2: If k is larger than total nodes
        if (k > total) return -1;

        // Step 3: Find (total - k)th node from the start
        int x = total - k;
        temp = head;
        while (x > 0) {
            temp = temp.next;
            x--;
        }

        return temp.data;
    }
}
