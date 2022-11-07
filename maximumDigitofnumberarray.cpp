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
	int max = arr[0];
	     // = INT_MIN;
    int min = arr[0];  
	for(i = 1; i < size; i++)
	{  // = 0;
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout<<"max = "<<max<<endl;
	cout<<"min = "<<min<<endl;
	
}
