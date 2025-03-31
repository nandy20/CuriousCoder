//https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int total=0;
       Node *temp=head;
       while(temp!=NULL){
           total++;
           temp=temp->next;
       }
       if(n>total){
           return -1;
       }
       int x=total-n;
       temp=head;
       while(x>0){
           temp=temp->next;
           x--;
       }
       return temp->data;
}
