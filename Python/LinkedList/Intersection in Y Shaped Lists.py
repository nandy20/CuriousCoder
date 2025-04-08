//https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
def getLength(root):
    cnt = 0
    temp = root
    while temp != None:
        temp = temp.next
        cnt += 1
    
    return cnt

def intersetPoint(head1,head2):
    l1, l2 = getLength(head1), getLength(head2)
    
    if l1 < l2:
        head1, head2 = head2, head1
        l1, l2 = l2, l1
    
    diff = l1 - l2
    
    ptr1, ptr2 = head1, head2
    
    while diff > 0:
        ptr1 = ptr1.next
        diff -= 1
    
    while ptr1 != None:
        if ptr1 == ptr2:
            return ptr1.data
        
        ptr1 = ptr1.next
        ptr2 = ptr2.next
    
    return -1
