//https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
class Solution {
    Node sortedInsert(Node head, int key) {
        // Add your code here.
        Node newNode = new Node(key);
        if (head == null || head.data > key) {
            newNode.next = head;
            return newNode;
        }

        // Case 2: Traverse and find position to insert
        Node current = head;
        while (current.next != null && current.next.data < key) {
            current = current.next;
        }

        newNode.next = current.next;
        current.next = newNode;

        return head;
    }
}
