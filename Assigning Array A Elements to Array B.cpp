#include<iostream>
using namespace std;
int main()
{
	int Arr_A[5]={2,3,4,5,6};
	int Arr_B[5];
	for(int i=0; i<5; i++)
	{
		Arr_B[i]=Arr_A[i];
	}
	cout<<"Elements of Empty Array B after Filling are: ";
	for(int i=0; i<5; i++)
	{
		cout<<Arr_B[i]<<" ";
	}
}
