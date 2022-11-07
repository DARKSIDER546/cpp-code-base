#include<iostream>
using namespace std;
main()
{
	int r = 4 ,c = 5 , i , j;
	char arr[][5] = {'a','b','c','d','e'};
	                {'f','g','h','i','j'};
	                {'k','l','m','n','o'};
	                {'p','q','r','s','t'};
	cout<<"enter the elements : "<<endl;
	for(i = 0; i < r; i++)
    {
    	for(j = 0; j < c; j++)
    	{
    		cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"testing : \n\n\n";
	int m = 0, n = 0, lc = c-1, lr = r-1;
	for(i = 0; i < c; i++)
	{
		cout<<arr[m][i]<<" ";
	}
	m++;
	for(i = m; i < r; i++)
	{
		cout<<arr[i][lc]<<" ";
	}
     lc--;
    
}
