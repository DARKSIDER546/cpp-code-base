#include<iostream>
using namespace std;
main()
{
   int r = 3 ,c = 3 , i ,j;
   int arr[r][c];
   cout<<"enter the elements : ";
   for(i = 0; i < r; i++)
   {
	   	for(j = 0; j < c; j++)
	   	{
	   		cin>>arr[i][j];
		}
		
   }
   for(i = 0; i < r; i++)
		{
			for(j = 0; j < c; j++)
			{
				cout<<arr[i][j];
			}
		}
}
