#include<iostream>
using namespace std;
main()
{
	char arr[100] = {"aman"};
	char brr[100] = {"aman"};
	char crr[100] = {"Aman"};
	int x = strcmp(arr, brr);
	cout<<"x = "<<x<<endl;
    if(x == 0)
	{
	   cout<<"equal";	
	}
	else
	{
		cout<<"not equal";
	}
}