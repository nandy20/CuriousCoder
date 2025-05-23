// Solution - https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1
Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node * newnode=new Node(x);
       if(head==NULL){
           return newnode;
       }
       newnode->next=head;
       return newnode;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        Node * newnode=new Node(x);
        if(head==NULL){
            return newnode;
        }
        Node* temp=head;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=newnode;
       return head;
    }
