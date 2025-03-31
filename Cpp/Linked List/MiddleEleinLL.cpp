//https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
class Solution {
    int getMiddle(Node head) {
        Node temp, temp1;
        temp=head;
        temp1=head.next;
        while(temp1!=null && temp1.next!=null){
            temp=temp.next;
            temp1=temp1.next.next;
        }
        if(temp1==null){
            return temp.data;
        }
        return temp.next.data;
    }
}
