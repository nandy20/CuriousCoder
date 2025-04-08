//https://www.geeksforgeeks.org/problems/remove-every-kth-node/1
class Solution:
    def deleteK(self, head, k):
        #code here  
        if k == 1:
            return None
        if k == 0:
            return head
        
        count = 0
        temp = head
        while temp:
            count += 1
            if (count + 1) % k == 0:
                if temp.next:
                    temp.next = temp.next.next
                count += 1
            temp = temp.next
        return head
