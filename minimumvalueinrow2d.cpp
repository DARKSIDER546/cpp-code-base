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
	for(i = 0 ; i < r; i++)
	{
		for(j = 0; j < c; j++) 
		{
			cin>>arr[i][j];
		}
	}		
	for(i = 0; i < r; i++)
    {	
        int min = arr[i][0];
    	for(j = 0; j < c; j++)
    	{
    		if(min > arr[i][j])
    		{
    		    min = arr[i][j];	
			}
			cout<<arr[i][j]<<" ";
		}
		cout<<"min = "<<min<<endl;
	}
}
