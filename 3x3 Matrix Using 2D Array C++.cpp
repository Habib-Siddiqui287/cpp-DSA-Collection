#include<iostream>
using namespace std;
int main()
{
	int array[3][3];
	cout<<"Enter Elements of 2D array matrix 3x3: "<<endl;
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cin>>array[i][j];
		}
	}
	cout<<"3x3 Matrix Entered by you: "<<endl;
	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<endl;
	}
}

