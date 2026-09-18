#include<iostream>
using namespace std;
#define MAX 1000
int arr[MAX];
int top = -1;
class Stack_implementation {
    public:
    void push(int x) {
        if(top >= MAX-1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
    }
    void pop() {
        if(top < 0) {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }
    int peek() {
        if(top < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};
int main() {
    Stack_implementation s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.peek() << endl; // Output: 30
    s.pop();
    cout << s.peek() << endl; // Output: 20 
    return 0;
}