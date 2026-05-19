#include<iostream>
using namespace std;

class queueArray {
public:
    int front;
    int rear;
    int capacity;
    int *queue;

    // Constructor to initialize the queue
    queueArray(int size) {
        capacity = size;
        queue = new int[capacity];
        front = 0;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == capacity - 1) { // Fixed: used == instead of =
            cout << "Queue is Full" << endl;
        } else {
            queue[++rear] = value;
            cout << "Enqueued: " << value << endl;
        }
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Removed: " << queue[front++] << endl;
            
            // Optional: Reset front/rear if queue becomes empty to reuse space
            if (front > rear) {
                front = 0;
                rear = -1;
            }
        }
    }

    // Optional: Destructor to clean up memory
    ~queueArray() {
        delete[] queue;
    }
};

int main() {
    queueArray q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();
    q.dequeue();

    cout << "Current front element index: " << q.front << endl;
    cout << "Current rear element index: " << q.rear << endl;

    return 0;
}
