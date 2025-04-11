//https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1
class Solution {
    Node reverseList(Node head) {
        // code here
        Node temp = null;
        Node temp1 = head;
        Node temp2;

        // Traverse and reverse the linked list
        while (temp1 != null) {
            temp2 = temp1.next;  // Save next node
            temp1.next = temp;   // Reverse current node's pointer
            temp = temp1;        // Move temp to current node
            temp1 = temp2;       // Move temp1 to next node
        }
        
        return temp; 
    }
}
