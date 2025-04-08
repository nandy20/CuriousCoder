//https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
class Solution:
    def reverseKGroup(self, head, k):
        # Code here
        def findKthNode(node):
            count=1
            curr=node
            while curr and curr.next and count<k:
                curr=curr.next
                count+=1
            
            return curr
            
        def reverse(node):
            curr=node
            prev=None
            while curr:
                nextt=curr.next
                curr.next=prev
                prev=curr
                curr=nextt
                
            return prev
        
        temp=head
        while (temp):
            kthNode=findKthNode(temp)
            nextNode=kthNode.next
            kthNode.next=None
            
            reverse(temp)
            if (temp==head):
                head=kthNode
            else:
                prevNode.next=kthNode
            
            prevNode=temp
            temp=nextNode
        
        return head
