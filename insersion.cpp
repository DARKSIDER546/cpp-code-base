#include<iostream>
using namespace std;
main()
{
	int arr[] = {4, 3, 8, 6, 1, 5};
	int i;
	for(i = 1; i < 6; i++)
	{
		int key = arr[i];
		int j = i-1;
		while(j >= 0 && key <= arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	for(i = 0; i < 6; i++)
	{
		cout<<arr[i]<<" ";
	}
}
