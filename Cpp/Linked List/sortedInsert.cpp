//https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *newnode=new Node(data);
        if(head->data>data){
            newnode->next=head;
            return newnode;
        }
        
        Node *temp;
        temp=head;
        while(temp->next!=NULL && temp->next->data<data){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        return head;
    }
};
