Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
     Node *temp1, *temp2, *temp3,*head3;
    temp1=head1,temp2=head2;
    if(head1->data<head2->data){
        head3=head1;
       temp3=head1;
       temp1=temp1->next;
    }
    else{
        head3=head2;
      temp3=head2;
      temp2=head2->next;
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data<temp2->data){
            temp3->next=temp1;
            temp3=temp3->next;
            temp1=temp1->next;
        }
        else{
            temp3->next=temp2;
            temp3=temp3->next;
            temp2=temp2->next;
        }
    }
    if(temp1!=NULL){
        temp3->next=temp1;
    }
    else if(temp2!=NULL){
        temp3->next=temp2;
    }
    
    return head3;
}  
