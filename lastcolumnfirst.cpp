#include<iostream>
using namespace std;
main()
{
	int r,c,i=0,j=0;
	cout<<"enter the rows : ";
	cin>>r;
	cout<<"enter the column : ";
	cin>>c;
	int arr[r][c];
	int t[r][c];
	cout<<"enter the elements : ";
	for(i = 0; i < r; i++)
	{
		for(j = 0; j < c; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"last column first : "<<endl;
	for(i = 0 ;i < r; i++)
	{
		for(j = c-1; j >= 0; j--)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"last row first : "<<endl;
	for(i = r-1;i >=0 ; i--)
	{
		for(j = 0; j< c ;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
	
