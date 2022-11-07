#include<iostream>
using namespace std;
main()
//if you n element there will be n-1 no of steps 
{
	int arr[] = {9,8,7,6};
	int size = 4;
	int i ,j;
	for(i = 0; i < 4-1; i++)//size-1 //number of steps
	{
		for( j = 0; j < 4-1; j++)//comparsions 
		{
			if(arr[j] > arr[j+1])
			{
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	cout<<"sorted elements are : ";
	for(i = 0; i < 4; i++)
	{
		cout<<arr[i]<<" ";
	}		
}
