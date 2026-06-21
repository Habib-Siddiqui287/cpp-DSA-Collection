#include<iostream>
using namespace std;
int main()
{
	int Arr[10];
	int Largest = Arr[0];
	cout<<"Enter 10 Elements of Array: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>Arr[i];
	}
	for(int i=0;i<10;i++)
	{
		if(Arr[i]>Largest)
		{
			Largest = Arr[i];
		}
	}
	cout<<"Largest number in array is "<<Largest;
		int Smallest = Arr[0];
		for(int i=0;i<10;i++)
	{
		if(Arr[i]<Smallest)
		{
			Smallest = Arr[i];
		}
	}
	cout<<"Smallest number in array is "<<Smallest;
}
