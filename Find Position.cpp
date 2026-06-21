#include <iostream>
using namespace std;
int main()
{
	int arr[5]={1,3,5,7,8};
	int position;
	cout<<"Enter the Position";
	cin>>position;
	int pos=sizeof(arr[5])/sizeof(arr[0]);
	for(int i=position;i<pos-1;i++){
		arr[i]=arr[i+1];
	}
	position--;
	
	for(int i=0;i<pos;i++)
	cout<<arr[i];
	
	cout<<"Position Found";
}
