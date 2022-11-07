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
	cout<<"enter the element to be searched : ";
	int item;
	cin>>item;
	for(i = 0; i < size; i++)
	{
	    if(item == arr[i])
	    {
	    	cout<<"found!! = "<<i<<endl;
	    	break;
		}
	}
	if(i == size)
	{
		cout<<"not found!!";
	}
}
