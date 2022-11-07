#include<iostream>
using namespace std;
//array must be in a sorted order;
//divide and conquor
main()
{
	int item;
	int arr[] = {11,22,33,44,55,66,77};
	//            0  1  2  3  4  5  6
	int beg = 0 ,end = 6 ,mid = (beg + end)/2;
	cout<<"enter the element to be searched : ";
	cin>>item;
	while(beg <= end)
	{
		if(item == arr[mid])
		{
			cout<<"item found : "<<mid;
			break;
		}
		if(item > arr[mid])
		{
			beg = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = (beg + end)/2;
	}
	if(beg > end)
	{
		cout<<"not found";
	}
}
