//https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        struct Node *temp,*temp1,*temp2;
        temp=NULL;
        temp1=head;
        while(temp1!=NULL){
            temp2=temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=temp2;
        }
        return temp;
    }
    
};
    
