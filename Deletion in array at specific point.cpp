#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,pos;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter Position for deleting Element: ";
	cin>>pos;
	for(int i=pos-1;i<n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	n--;
	cout<<"Array After deletion is: ";
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}
