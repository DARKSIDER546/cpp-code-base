#include<iostream>
using namespace std;
main()
{
	int arr[] = {11, 22, 33, 44, 55};
	int t = arr[5-1],i;
    for(i = 5-1; i > 0; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[0] = t;
	cout<<"after rotation : "<<endl; 
	for(i = 0; i < 5; i++)
    {
		cout<<arr[i]<<" ";
    }
}
