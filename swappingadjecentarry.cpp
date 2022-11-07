#include<iostream>
using namespace std;
main()
{
	int arr[] = {1, 2, 3 ,4 ,5};
	int i;
	for(i = 0; i < 5-1; i = i+2)
	{
		if(5%2!= 0)
		{
			arr[5-1] = arr
		}
		int t = arr[i];
		arr[i] = arr[i+1];
		arr[i+1] = t;
		if(i = 5-1)
		{
			arr[5-1] = i;
		}		
	}
	for(i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
}
