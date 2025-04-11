//https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
       if (head == nullptr || k <= 1) return head;  // Use nullptr for null pointers

        Node* current = head;
        Node* prevTail = nullptr;
        Node* newHead = nullptr;

        while (current != nullptr) {
            Node* segmentHead = current;
            Node* prev = nullptr;
            Node* next = nullptr;
            int count = 0;

            // Reverse 'k' nodes
            while (current != nullptr && count < k) {
                next = current->next;
                current->next = prev;
                prev = current;
                current = next;
                count++;
            }

            // If new head is not assigned, assign the reversed segment's head
            if (newHead == nullptr) {
                newHead = prev;
            }

            // Connect the previous part to the current part (if exists)
            if (prevTail != nullptr) {
                prevTail->next = prev;
            }

            // Set the tail for the next reversed segment
            prevTail = segmentHead;
        }

        return newHead;
    }
};
