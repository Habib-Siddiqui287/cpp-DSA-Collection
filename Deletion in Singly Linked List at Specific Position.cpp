#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
Node *head = NULL;
void Insert(int n) 
{
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void deleteFromPosition()
{
    int pos;
    cout<<"\nEnter Position at which you want to delete Node: ";
    cin>>pos;
    if(pos < 1 || head == NULL) 
	{
        cout << "Invalid position or the list is empty!"<<endl;
        return;
    }
    Node *temp = head;
    if(pos == 1) 
	{
        head = temp->next;
        delete temp;
        cout<<"Node at position 1 deleted successfully."<<endl;
        return;
    }
    for(int i=1; temp!=NULL && i<pos-1; i++) {
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL)
	{
        cout<<"Invalid position (out of bounds)!"<<endl;
        return;
    }
    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;
    cout<<"Node at position "<<pos<<" deleted successfully."<<endl;
}
void print() 
{
    cout<<"Elements in Linked List are: ";
    Node *temp = head;
    if (temp == NULL) 
	{
        cout<<"List is empty."<<endl;
        return;
    }
    while(temp != NULL) 
	{
        cout<<temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() 
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4); 
    Insert(5); 
    print();
    deleteFromPosition();
    print();
    return 0;
}
