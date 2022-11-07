#include<iostream>
using namespace std;
main()
{
	int arr[] = {11, 22, 33, 44, 55};
	int j,i,k;
	for(k = 0; k < 5; k++)
	{
	for(j = 0; j < 1; j++)
	{
		int t = arr[0] ,i;
		for(i = 1; i < 5; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[5-1] = t;
    }
 	cout<<"after rotation : "<<endl;
	for(i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
}
}
