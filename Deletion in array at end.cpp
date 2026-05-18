#include<iostream>
using namespace std;
int main()
{
	int arr[10],n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	n--;
	cout<<"Array After deletion is: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
