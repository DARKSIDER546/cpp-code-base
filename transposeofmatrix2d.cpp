#include<iostream>
using namespace std;
main()
{
	int r,c,i,j;
	cout<<"enter the rows : ";
	cin>>r;
	cout<<"enter the column : ";
	cin>>c;
	int arr[r][c];
	int t[c][r];
	cout<<"enter the elements : ";
	for(i = 0; i< r; i++)
	{
		for(j = 0; j < c; j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"transpose : "<<endl;
	for(i = 0 ; i < c; i++)
	{
		for(j = 0; j < r; j++)
		{
			t[i][j] = arr[j][i];
		}
		cout<<endl;
	}
	for(i = 0; i< c; i++)
    {
		for(j = 0 ;j <r; j++)
		{
			cout<<t[i][j]<<" ";
		}
	cout<<endl;
    }
}
