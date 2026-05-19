#include<iostream>
using namespace std;
class StackArray
{
	public:
		int top;
		int size;
		int *stack;
		StackArray(int s)
		{
			size = 5;
			stack = new int[size];
			top = -1;
		}
		bool isFull()
		{
			return (top ==size-1);
		}
		bool isEmpty()
		{
			return (top ==-1);
		}
		void push(int value)
		{
			if(isFull())
			{
				cout<<"Stack is overflow!"<<endl;
				return;
			}
			stack[++top] = value;
			cout<<value<<" pushed to stack"<<endl;
		}
	void pop()
	{
		if(isEmpty())
		{
			cout<<"stack underflow"<<endl;
			return;
		}
		cout<<stack[top--]<<" Poped from stack "<<endl;
	}	
		int isPeek()
		{
			if(isEmpty())
			{
				cout<<"Stack is Empty!"<<endl;
				return -1;
			}
			return stack[top];
		}
		~StackArray()
		{
			delete[] stack;
		}
};
int main()
{
	StackArray s(5);
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	s.pop();
	s.pop();
	
	cout<<"Top element is: "<<s.isPeek()<<endl;
	return 0;
}
