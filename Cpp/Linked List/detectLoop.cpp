// Solution for - https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
bool detectLoop(Node* head)
    {
        // your code here
        Node *slow,*fast;
        slow=head,fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
             if(slow==fast){
                return true;
            }
        }
        return false;
    }
