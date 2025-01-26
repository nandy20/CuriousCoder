// Solution for - https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
int getMiddle(Node *head)
    {
        // Your code here
        Node *temp, *temp1;
        temp=head,temp1=head->next;
        while(temp1!=NULL && temp1->next!=NULL){
            temp=temp->next;
            temp1=temp1->next->next;
        }
        if(temp1==NULL){
            return temp->data;
        }
        return temp->next->data;
    }
