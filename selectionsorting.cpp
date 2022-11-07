#include<iostream>
using namespace std;
main()
{
	int arr[] = {5, 4, 7, 1, 3};
	int i ,j;
	for(i = 0; i < 5; i++)
	{
		int min = i;
		for(j = j+1; j < 5; j++)
		{
			if(arr[min] > arr[j])
			{
				min = j;
			}
		}
		if(i != min)
		{
			int t = arr[i];
			arr[i] = arr[min];
			arr[min] = t;
		}
	}
	cout<<"after sorting : "<<endl;
	for(i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
}
