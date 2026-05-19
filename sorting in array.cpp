#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,temp;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter Array Elements: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<n;j++)
	{
		for(int i=j+1;i<n;i++)
		{
			if(arr[j]>arr[i])
			{
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		    }
		}
	}
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i]<<" ";
	}
}
