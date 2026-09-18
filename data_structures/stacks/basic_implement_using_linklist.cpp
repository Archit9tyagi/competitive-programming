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
void insert(Node *head,int val,Node *tos){
    if(head == nullptr){
        Node *head = new Node(val);
    }
    Node *dummy = new Node(val);
    tos->next = dummy;
    dummy->next = nullptr;
    return;
}
void printf(Node *head){
    Node *dummy = head;
    while(dummy != nullptr){
        cout<<dummy->val<<" ";
        dummy = dummy->next;
    }
    cout<<endl;
}
int main() {
    Node *head = new Node(10);
    Node *temp = new Node(20);
    Node *temp1 = new Node(30);
    Node *temp2 = new Node(40);
    Node *tos = new Node(50);
    
    head->next = temp;
    temp->next = temp1;
    temp1->next = temp2;
    temp2->next = tos;
    tos->next = nullptr;

    printf(head);

    insert(head,90,tos);

    printf(head);


    return 0;
}