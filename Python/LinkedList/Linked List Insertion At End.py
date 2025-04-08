//https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
class Solution:
    #Function to insert a node at the end of the linked list.
    def insertAtEnd(self,head,x):
        # code here 
        newnode = Node(x)
        if head is None:
            return newnode
        temp = head
        while temp.next is not None:
            temp = temp.next
        temp.next = newnode
        return head
