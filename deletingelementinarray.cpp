#include<iostream>
using namespace std;
main()
{
	int size,i;
	cout<<"enter the size : ";
	cin>>size;
	int arr[size];
	cout<<"enter the elements : ";
	for(i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	int pos,j;
	int k = 1;
	for(j = 0; j < 2; j++)
	{
	cout<<"enter the position : ";
	cin>>pos;
	for(i = pos; i < size-k; i++)
	{
		arr[i] = arr[i+1];
	}
	for(i = 0; i < size-k; i++)
	{
		cout<<arr[i]<<" ";
	}
	k++;
}
}
