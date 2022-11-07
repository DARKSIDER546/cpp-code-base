#include<iostream>
using namespace std;
main()
{
	int arr[] = {1,3,4,5,7,9,15,18};
	int brr[] = {2,3,5,6,16};
	int i = 0,j = 0 ,s1 = 8, s2 = 5;
	while(i < s1 && j < s2)
	{
		if(arr[i] < brr[j])
		{
			cout<<arr[i]<<" ";
			i++;
		}
		else if(brr[j] < arr[i])
		{
			cout<<brr[j++]<<" ";
		}
		else
		{
			cout<<arr[i++]<<" ";
			j++;
		}
	}
    if(i < s1)
    {
    	while(i < s1)
    	{
    		cout<<arr[i]<<" ";
    		i++;
		}
	}
	if(j < s2)
	{
		while(j < s2)
		{
			cout<<brr[j]<<" ";
			j++;
		}
	}
}
