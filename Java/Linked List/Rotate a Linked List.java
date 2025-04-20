//https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
class Solution {
    public Node rotate(Node head, int k) {
        // add code here
        if (head == null || head.next == null || k == 0)
            return head;

        // Step 1: Find the length of the linked list
        Node temp = head;
        int length = 1;
        while (temp.next != null) {
            temp = temp.next;
            length++;
        }

        // Step 2: Normalize k
        k = k % length;
        if (k == 0)
            return head;

        // Step 3: Make it circular
        temp.next = head;

        // Step 4: Traverse to the (k)th node
        Node newTail = head;
        for (int i = 1; i < k; i++) {
            newTail = newTail.next;
        }

        // Step 5: Set new head and break the circle
        Node newHead = newTail.next;
        newTail.next = null;

        return newHead;
    }
}
