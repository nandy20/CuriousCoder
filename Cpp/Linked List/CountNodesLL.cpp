// https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int count=0;
        Node * temp=head;
        //Code here
        while(temp!=NULL){
            count++;
            temp=temp->next;   
        }
       return count;
    }
};
  
