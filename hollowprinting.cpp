#include<iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"enter the rows : ";
	cin>>r;
	cout<<"enter the columns : ";
	cin>>c;
	int arr[r][c];
	int i,j;
	for(i = 0; i < r; i++)
	{
	   for(j = 0; j < c; j++)
	   {
	   	  cin>>arr[i][j];
	   }
	}
	for(i = 0; i< r; i++)
	{
		for(j = 0; j < c; j++)
		{
		    if(i == 0 || i == r-1 || j == 0 || j == c-1)
		    {
		    	cout<<arr[i][j];
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
