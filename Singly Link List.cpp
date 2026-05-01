#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node(int d) {
        data = d;
        next = NULL;
    }
};
class Linklist {
public:
    node *head, *tail;
    Linklist() {
        head = tail = NULL;
    }
    void add_on_end(int d) {
        node* temp = new node(d);
        if(head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp; 
        }
    }
    void add_on_front(int d) {
        node* NewNode = new node(d);
        if(head == NULL) {
            head = tail = NewNode;
        } else {
            NewNode->next = head;
            head = NewNode;
        }
    }
    void delete_all_nodes() {
        node* temp;
        temp = head;
        while(temp != NULL) {
            head = head->next;
            delete temp;
            temp = head;
        }
        tail = NULL;
    }
    void delete_from_front() {
        if (head == NULL)
        {
        	return;
		}
        node*temp = head;
        head = head->next;
        delete temp;
        if (head == NULL) { 
            tail = NULL;
        }
    }
    void print() {
        node* temp = head;
        while(temp != NULL) {
            cout << temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main() {
    Linklist o;
    o.add_on_end(10);
    o.add_on_end(20);
    o.add_on_front(5);
    cout << "Current Linked List: " << endl;
    o.print();    
    return 0;
}
