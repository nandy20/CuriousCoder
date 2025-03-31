//https://www.geeksforgeeks.org/problems/remove-every-kth-node/1
Node* deleteK(Node *head,int k)
{
    if(k==1){
        return NULL;
    }
    if(k==0){
        return head;
    }
  int count=0;
  Node *temp=head;
  while(temp!=NULL){
      count++;
      if((count+1)%k==0){
          if(temp->next!=NULL){
             temp->next=temp->next->next;
          }
          count++;
      }
      
      temp=temp->next;
  }
  return head;
}
