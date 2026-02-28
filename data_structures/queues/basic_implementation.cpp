#include<iostream>
using namespace std;

#define MAX 1000

int arr[MAX];
int top = -1;

class Queue_implementation {
public:

    void enqueue(int x) {
        if(top >= MAX - 1) {
            cout << "Queue overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    void dequeue() {
        if(top < 0) {
            cout << "Queue underflow" << endl;
            return;
        }

        for(int i = 0; i < top; i++) {
            arr[i] = arr[i + 1];
        }
        top--;
    }

    int front() {
        if(top < 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[0];
    }

    void display() {
        if(top < 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for(int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Queue_implementation q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front: " << q.front() << endl;

    q.dequeue();

    q.display();

    cout << "Front: " << q.front() << endl;

    return 0;
}