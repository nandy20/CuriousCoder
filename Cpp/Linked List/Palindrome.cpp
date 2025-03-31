class Solution{
  public:
    Node* reverse(Node *head){
        Node *temp=NULL,*temp1=head,*temp2;
        while(temp1!=NULL){
            temp2=temp1->next;
            temp1->next=temp;
            temp=temp1;
            temp1=temp2;
        }
        return temp;
    }
    bool checkpalindrome(Node *head,Node *head1){
        while(head!=NULL && head1!=NULL){
            if(head->data!=head1->data){
                return false;
            }
            head=head->next;
            head1=head1->next;
        }
        return true;
    }
    bool isPalindrome(Node *head)
    {
        Node *temp,*temp1;
        temp=head,temp1=head->next;
        while(temp1!=NULL && temp1->next!=NULL){
            temp=temp->next;
            temp1=temp1->next->next;
        }
        Node *temp2=temp->next;
        
        temp->next=NULL;
        Node *newhead=reverse(temp2);
        return checkpalindrome(head,newhead);
    }
};
