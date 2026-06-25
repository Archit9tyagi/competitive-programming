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
    // void display(Node* p){
    //     while(p != NULL){
    //         cout<<p->data;
    //         p = p->next;
    //     }
    // }

};
void display(Node* p){
        while(p != NULL){
            cout<<p->data;
            p = p->next;
        }
    }
int main() {
    // // Dynamic pointer allocation Heap
    // Node* x = new Node(10);
    // // Static allocation in Stack
    // Node y(20);
    // x->next = &y;

    // Node z(30);
    // y = z;

    Node* p = new Node;
    p->data = 10;
    p->next = NULL;
    display(p);

    return 0;
}