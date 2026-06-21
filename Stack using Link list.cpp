#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node*next;
		node(int value)
		{
		data = value;
		next = NULL;
	    }
};
class StackLinklist{
	private:
		node*top;
		public:
			StackLinklist()
			{
				top = NULL;
			}
			bool isEmpty()
			{
			return (top == NULL);
		    }
		    void push(int value)
		    {
		    	node* newNode = new node(value);
		    	newNode->next = top;
		    	top = newNode;
		    	cout<<value<<" pushed to stack"<<endl;
			}
	void pop()
	{
		if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return;
		}
		node*temp = top;
		cout<<top->data<<" Poped from stack "<<endl;
	    top = top->next;
	    delete temp;
	}
		int Peek()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty!"<<endl;
				return -1;
			}
			return top->data;
		}
		~StackLinklist()
		{
			while(!isEmpty())
			{
			pop();
		    }
		}
};
int main()
{
	StackLinklist s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.pop();
	s.pop();
	cout<<"Top element is: "<<s.Peek()<<endl;
	return 0;
}
