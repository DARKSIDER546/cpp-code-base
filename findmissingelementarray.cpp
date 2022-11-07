#include<iostream>
using namespace std;
main()
{
	int arr[] = {1,2,3,5,6};
	int i;
	for(i = 0; i < 5-1; i++)
	{
	   if(arr[i]+1 != arr[i+1])
	   {
	   	  cout<<arr[i]+1;
	   }
	}
}
