#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == NULL) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued: " << value << endl;
    }
    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty! Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        cout << "Dequeued: " << front->data << endl;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }

        delete temp;
    }
    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    return 0;
}
