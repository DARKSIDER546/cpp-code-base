#include<iostream>
using namespace std;
main()
{
 	char arr[100];
 	char brr[100];
 	cin>>arr;
 	int length = strlen(arr), k = 0;
 	for(int  i = length-1; i >= 0; i--)
 	{
 	    //cout<<arr[i];	
 	    brr[k] = arr[i];
 	    k++;
	}
     cout<<brr;
}
