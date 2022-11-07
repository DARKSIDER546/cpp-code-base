#include<iostream>
using namespace std;
main()
{
	int arr[] = {3, 5, 9, 4, 11, 2, 13};
	int odd[7];
	int even[7],i,m=0,n=0;
	for(i = 0; i< 7; i++)
	{
	   if(arr[i]%2 == 0)
	   {
	        even[m] = arr[i];
	        m++;
	   }
	   else
	    {
	    	odd[n] = arr[i];
	    	n++;
		}
	}
	cout<<"odd value : "<<endl;
	for(i = 0; i < n; i++)
	{
		cout<<odd[i]<<" ";
	}
	cout<<"\neven value : "<<endl;
	for(i = 0; i < m; i++)
	{
		cout<<even[i]<<" ";
	}
}
