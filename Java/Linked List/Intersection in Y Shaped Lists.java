//https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
class Intersect {
    // Function to find intersection point in Y shaped Linked Lists.
    static Node intersectPoint(Node head1, Node head2) {
        int count1 = 0, count2 = 0;
        Node temp1 = head1, temp2 = head2;
        
        // Find the length of the first linked list
        while (temp1 != null) {
            count1++;
            temp1 = temp1.next;
        }
        
        // Find the length of the second linked list
        while (temp2 != null) {
            count2++;
            temp2 = temp2.next;
        }
        
        // Determine the difference in lengths
        int diff = Math.abs(count1 - count2);
        
        // Reset the pointers to the heads of the lists
        temp1 = head1;
        temp2 = head2;
        
        // Move the pointer of the longer list ahead by the difference in lengths
        if (count1 > count2) {
            while (diff-- > 0) {
                temp1 = temp1.next;
            }
        } else {
            while (diff-- > 0) {
                temp2 = temp2.next;
            }
        }
        
        // Traverse both lists simultaneously and check for intersection
        while (temp1 != null && temp2 != null) {
            if (temp1 == temp2) {
                return temp1;  // Return the intersection node
            }
            temp1 = temp1.next;
            temp2 = temp2.next;
        }
        
        return null;  // No intersection found
    }
}
