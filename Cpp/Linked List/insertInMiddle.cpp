//https://www.geeksforgeeks.org/problems/insert-in-middle-of-linked-list/1
Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node *temp, *temp1;
	temp=head;
	temp1=head;
	while(temp1->next!=NULL && temp1->next->next!=NULL){
	        temp1=temp1->next->next;
	        temp=temp->next;
	}
	Node *newnode=new Node(x);
	newnode->next=temp->next;
	temp->next=newnode;
	return head;
}
