//https://www.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
def reverse(self, head):
        prev = None
        current = head
        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node
        return prev

    def checkpalindrome(self, head, head1):
        while head and head1:
            if head.data != head1.data:
                return False
            head = head.next
            head1 = head1.next
        return True

    def isPalindrome(self, head):
        if not head:
            return True
        
        # Find the middle of the list
        slow = head
        fast = head
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        # Reverse the second half of the list
        second_half = self.reverse(slow)
        
        # Check if the first half and reversed second half are the same
        return self.checkpalindrome(head, second_half)
