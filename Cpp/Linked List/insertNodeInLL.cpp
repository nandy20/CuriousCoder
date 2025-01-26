// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node * next;
};
int main() {
    Node * head = NULL;
    Node * temp = NULL;
    int n = 5;
    while(n>0){
        if(head==NULL){
            head = new Node();
            cin >> head->data;
            head->next = NULL;
            temp = head;
        } else{
            Node * temp1 = new Node();
            cin >> temp1->data;
            temp1->next = NULL;
            temp->next = temp1;
            temp = temp1;
        }
        n--;
    }
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
