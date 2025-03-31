//https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        return head->next;
    }
    Node *temp=head;
    while(temp!=NULL && x>2){
        temp=temp->next;
        x--;
    }
    if(temp->next!=NULL){
        temp->next=temp->next->next;
    }
    else{
        temp->next=NULL;
    }
    return head;
}
