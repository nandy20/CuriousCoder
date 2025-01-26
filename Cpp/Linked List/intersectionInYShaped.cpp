// Solution for - https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *temp,*temp1;
    int count=0, count1=0,x;
    temp=head1;
    temp1=head2;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=NULL){
        count1++;
        temp=temp->next;
    }
    if(count>count1){
        x=count-count1;
        temp=head1;
        temp1=head2;
    }
    else{
        x=count1-count;
        temp=head2;
        temp1=head1;
    }
    
    while(x>0){
        x--;
        temp=temp->next;
    }
    while(temp!=NULL && temp1!=NULL){
        if(temp==temp1){
            return temp->data;
        }
        temp=temp->next;
        temp1=temp1->next;
    }
    return -1;
    
}
