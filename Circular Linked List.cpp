#include<iostream>
using namespace std;
class linklist
{
	public:
		struct node{
			int data;
			node*next;
			node*prev;
		};
		node*head;
		node*current;
		linklist()
		{
			head = NULL;
		}
		void insert(int value)
		{
			node*n = new node;
			n->data = value;
			n->next = NULL;
			n->prev = NULL;
           if(head == NULL)
           {
           	head = n; 
           	head->next = head;
           	head->prev = n;
		   }
		   else
		   {
		   	current = head;
		   	while(current-> next != head)
		   	{
		   		current = current->next;
			}
              current->next = n;
			  n->next = head;
			  head->prev = n;			
		   }
		}
	void dis()
	{
		if(head == NULL)
		{
			cout<<"Empty";
		}
		else
		{
			current = head;
			do{
				cout<<current->data <<"  ";
				current = current->next;
			}
			while(current!= head);
		}
	}
};
int main()
{
	linklist obj;
	int x;
	cout<<"Enter 5 elements: "<<endl;
	for(int i=0 ; i<5 ; i++)
	{
		cin>>x;
		obj.insert(x);
	}
	obj.dis();
}
