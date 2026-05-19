#include<iostream>
using namespace std;
class Node{
	public:
	  int data;
	  Node* next;
	  Node(int d)
	  {
	  	data = d;
	  	next=NULL;
	  }
};
class LinkedList
{
	public:
	Node *head,*tail;
	LinkList()
	{
	head = tail = NULL;
    }
    void Insert_add_end(int d)
    {
    	Node *temp=new Node(d);
    	if(head==NULL)
    	{
    		head=tail=temp;
		}
		else
		{
			tail->next=temp;
			tail = temp;
		}
	}
	void add_on_front(int d)
	{
	Node*temp;
	Node* NewNode = new Node(d);
	if(head == NULL)
	{
		head = tail = NewNode;
	}
	else
	{
		NewNode->next=head;
		head=NewNode;
	}
    }
     void deleteFromFront()
	{
		Node*temp;
		temp = head;
		head = head->next;
		delete temp;
	}
	void DeleteAllNodes()
	{
		Node *temp;
		temp = head;
		while(temp!=NULL)
		{
			head = head->next;
			delete temp;
			temp = head;
		}
	}
    void deleteFromPosition()
	{
		Node*nextNode;
		int i=1,pos;
		cout<<"Enter Position at which you want to delete Node: ";
		cin>>pos;
		if(pos<1)
		{
			cout<<"Invalid Position!"<<endl;
		}
		Node *temp;
		temp=head;
		if(i>pos-1)
		{
			temp=temp->next;
			i++;
		}
		nextNode = temp->next;
		temp->next=nextNode->next;
		delete nextNode;
	}	
	void print()
	{
		Node *temp;
		temp = head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" "<<endl;
			temp = temp->next;
		}
	}
};
int main()
{
	LinkedList o;
	o.Insert_add_end(35);
	o.add_on_front(30);
	o.add_on_front(25);
	o.add_on_front(20);
	o.add_on_front(15);
	o.print();
	//o.deleteFromFront();
	//o.print();
	//o.DeleteAllNodes();
	o.deleteFromPosition();
	o.print();
	return 0;
}
