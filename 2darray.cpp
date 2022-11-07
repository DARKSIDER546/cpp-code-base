#include<iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"enter the rows : ";
	cin>>r;
	cout<<"enter the column : ";
	cin>>c;
	int arr[r][c];
	int i,j;
	cout<<"enter the elements : ";
	for(i = 0 ; i < r; i++) // rows
	{
		for(j = 0; j < c; j++) //columns
		{
			cin>>arr[i][j];
		}
	}	
	cout<<"elements are : "<<endl;
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
