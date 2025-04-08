//https://leetcode.com/problems/palindrome-linked-list/description/
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse(self, head: ListNode) -> ListNode:
        prev = None
        curr = head
        while curr:
            next_temp = curr.next
            curr.next = prev
            prev = curr
            curr = next_temp
        return prev

    def check_palindrome(self, head1: ListNode, head2: ListNode) -> bool:
        while head1 and head2:
            if head1.val != head2.val:
                return False
            head1 = head1.next
            head2 = head2.next
        return True

    def isPalindrome(self, head: ListNode) -> bool:
        if not head or not head.next:
            return True

        slow = head
        fast = head.next
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        second_half_start = slow.next
        slow.next = None  # Split the list into two halves

        reversed_second_half = self.reverse(second_half_start)
        return self.check_palindrome(head, reversed_second_half)
