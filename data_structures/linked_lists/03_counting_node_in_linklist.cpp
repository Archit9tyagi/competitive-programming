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
int count(Node* p){
    int cnt = 0;
    while(p != NULL){
        cnt++;
        p = p->next;
    }
    return cnt;
}
int count_recursive(Node* p){
    if(p == NULL){
        return 0;
    }
    else{
        return 1 + count_recursive(p->next);
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
    cout<<count_recursive(p);        
    return 0;
}