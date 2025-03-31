//https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *temp=head, *temp2=head;
        while(k>1 && temp!=NULL){
            k--;
            if(temp->next==NULL){
                return head;
            }
            temp=temp->next;
        }
        if(temp->next==NULL){
            return head;
        }
        head=temp->next;
        Node *temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp->next=NULL;
        temp1->next=temp2;
        return head;
    }
};
    
