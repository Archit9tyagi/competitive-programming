#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(){
        data = 0;
        next = NULL;
    }

    Node(int val){
        data = val;
        next = NULL;
    }
};

void iterative_display(Node* p){
    while(p != NULL){
        cout<<"[" << p->data << "]"<<" ";
        p = p->next;
    }
}
void recursive_display(Node* p){
    if(p != NULL){
        cout<<"[" << p->data << "]"<<" ";
        recursive_display(p->next);
    }
}

int main(){
    Node* p = new Node(10);
    Node* q = new Node(20);
    Node* r = new Node(30);

    // Linking
    p->next = q;
    q->next = r;
    r->next = NULL;

    // Display linked list
    iterative_display(p);

    Node* s = new Node(40);

    r->next = s;
    s->next = NULL;

    recursive_display(p);  


    return 0;
}