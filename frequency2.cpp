#include<iostream>
using namespace std;
main()
{
  //int arr[] = {2, 3, 4, 2, 3, 6, 2};
	int arr[] = {2, 2, 2, 3, 3, 4, 6};
	int i, count = 1;
	for(i = 0; i < 7-1; i++)
	{
		if(arr[i] == arr[i+1])
		{
			count++;
		}
		if(arr[i] != arr[i+1])
		{
			cout<<arr[i]<<" comes "<<count<<" times "<<endl;
			count = 1;
		}
		if(i == 7-2 && arr[i] != arr[i+1])
		{
		   cout<<arr[i+1]<<" comes "<<count<<" times "<<endl;
		}
	}
}
