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
void display(Node* p){
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}
int sum(Node* p){
    int sum = 0;
    while(p != NULL){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}
int sum_recursive(Node* p){
    if(p == NULL){
        return 0;
    }
    else{
        return p->data + sum_recursive(p->next);
    }
}
int main() {
    Node* p = new Node(10);
    Node* q = new Node(20);
    Node* r = new Node(30);

    // Linking
    p->next = q;
    q->next = r;
    r->next = NULL;

    display(p);
    cout<<endl;
    cout<<sum_recursive(p);        
    return 0;
}