//https://www.geeksforgeeks.org/problems/identical-linked-lists/1
bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    struct Node *temp1,*temp2;
    int i=0,j=0;
    for(temp1=head1;temp1!=NULL;temp1=temp1->next){
        i++;
    }
    for(temp2=head2;temp2!=NULL;temp2=temp2->next){
        j++;
    }
    if(i!=j){
        return false;
    }
    else{
        temp1=head1;
        temp2=head2;
        while(temp1!=NULL){
            if(temp1->data==temp2->data){
                temp1=temp1->next;
                temp2=temp2->next;
            }
            else{
                break;
            }
        }
        if(temp1!=NULL){
            return false;
        }
        else{
            return true;
        }
    }
}
