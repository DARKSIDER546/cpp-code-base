#include<iostream>
using namespace std;
main()
{
	int size,i,sum = 0;
	cout<<"enter the size : ";
	cin>>size;
	int arr[size];
	cout<<"enter the element : ";
    for( i  = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	for(i = 0 ;i < size; i++)
	{
	   sum = sum + arr[i];	
	}
	cout<<"sum : "<<sum;	
}
