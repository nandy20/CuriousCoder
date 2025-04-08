//https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
def deleteNode(head, x):
    if x == 1:
        return head.next

    temp = head
    for _ in range(x - 2):
        if temp is None:
            return head
        temp = temp.next

    if temp is not None and temp.next is not None:
        temp.next = temp.next.next

    return head
