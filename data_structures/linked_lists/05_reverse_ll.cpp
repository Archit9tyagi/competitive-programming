#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next = nullptr;
    }
};
void printf(Node *head){
    Node *dummy = head;
    while(dummy != nullptr){
        cout<<dummy->val;
        dummy = dummy->next;
    }
}
int main() {
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    Node *temp2 = new Node(40);

    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;

    printf(head);


    return 0;
}