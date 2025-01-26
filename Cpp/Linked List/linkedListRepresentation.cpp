// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node * next;
};
int main() {
    struct Node * head = new struct Node();
    head->data = 4;
    head->next = NULL;
    struct Node * temp = new struct Node();
    temp->data = 6;
    temp->next = NULL;
    head->next = temp;
    cout<< head->data;
    return 0;
}
