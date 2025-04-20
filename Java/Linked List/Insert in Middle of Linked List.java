//https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1
class Solution {
    public Node insertInMiddle(Node head, int x) {
        // Code here
        Node newNode = new Node(x);

        // Case 1: If the list is empty, return the new node as the head
        if (head == null) {
            head = newNode;
            return head;
        }

        // Case 2: Use two pointers to find the middle
        Node slow = head;
        Node fast = head;

        // Traverse until fast reaches the end (fast pointer moves two steps at a time)
        while (fast != null && fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        // Insert the new node after the slow pointer (middle position)
        newNode.next = slow.next;
        slow.next = newNode;

        return head;
    }
}
