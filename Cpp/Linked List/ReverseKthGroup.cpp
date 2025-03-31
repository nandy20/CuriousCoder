//https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        int a[100000];
        struct node *temp=head;
       while(temp!=NULL){
            int x=0;
            struct node *temp1=temp;
            while(x<k&& temp!=NULL){
                a[x]=temp->data;
                x++;
                 temp=temp->next;
            }
            x--;
            while(x>=0){
                temp1->data=a[x];
                temp1=temp1->next;
                x--;
            }
            
        }
        return head;
    }
};
