#include<iostream>
using namespace std;
main()
{
	int size,i,item,pos;
	cout<<"enter the size : ";
	cin>>size;
	int arr[size+1];
	cout<<"enter the elements : ";
	for(i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be inserted : ";
	cin>>item;
	cout<<"enter the position :";
	cin>>pos;
	for(i = size-1; i >= pos; i--)//displacement
	{
	    arr[i+1] = arr[i];	
	}
	arr[pos] = item;
	for(i = 0; i < size+1; i++)
    {
    	cout<<arr[i]<<" ";
	}
}
