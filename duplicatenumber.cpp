#include<iostream>
using namespace std;
main()
{
 	int arr[] = {2, 3, 4, 2, 3, 6, 2};
 	int f[] = {-1, -1, -1, -1, -1, -1, -1};
	int i,j;
	for(i = 0; i < 7; i++)
	{
		int count = 1;
	    for(j = i+1; j < 7; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				f[j] = 0;
			}
	    } 
		if(f[i] != 0)
		{
			f[i] = count;
		}	
	} 
	cout<<"frequency : "<<endl;
	for(i = 0; i < 7; i++)
	{
		if(f[i] > 1)
		{
	       cout<<arr[i]<<" comes "<<f[i]<<" times "<<endl;
	    }
	}
}
