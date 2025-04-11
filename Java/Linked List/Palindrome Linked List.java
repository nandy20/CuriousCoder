//https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
class Solution {
    // Function to check whether the list is palindrome.
    
    public static Node reverse(Node head) {
        Node temp = null;
        Node temp1 = head;
        Node temp2;

        while (temp1 != null) {
            temp2 = temp1.next;
            temp1.next = temp;
            temp = temp1;
            temp1 = temp2;
        }
        return temp;
    }

    public static boolean checkPalindrome(Node head, Node head1) {
        while (head != null && head1 != null) {
            if (head.data != head1.data) {
                return false;
            }
            head = head.next;
            head1 = head1.next;
        }
        return true;
    }
    static boolean isPalindrome(Node head) {
        // Your code here
        if (head == null || head.next == null) return true;

        Node temp = head;
        Node temp1 = head.next;

        while (temp1 != null && temp1.next != null) {
            temp = temp.next;
            temp1 = temp1.next.next;
        }

        Node temp2 = temp.next;
        temp.next = null;

        Node newHead = reverse(temp2);

        return checkPalindrome(head, newHead);
    }
}
