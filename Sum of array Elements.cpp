#include<iostream>
using namespace std;
int main()
{
	int Arr[5];
	cout<<"Enter 5 Elements of array: ";
	for(int j=0;j<5; j++)
	{
		cin>>Arr[j];
	}
	int sum =0;
	for(int j=0; j<5; j++)
	{
		sum = sum+Arr[j];
	}
	cout<<"Sum of array elements is: "<<sum;
}
