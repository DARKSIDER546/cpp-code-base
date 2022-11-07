#include<iostream>
using namespace std;
main()
{
	int arr[] = {3,7,4,9,2};
	int brr[] = {8,1,5};
	int crr[8],i;
	for(i = 0; i < 5; i++)
	{
		crr[i] = arr[i];
	}
	for(i = 0; i < 3; i++)
	{
		crr[5+i] = brr[i]; 
	}
	cout<<"after merging : "<<endl;
	for(i = 0; i < 8; i++)
	{
		cout<<crr[i]<<" ";
	}
}
