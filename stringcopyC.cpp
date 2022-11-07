#include<iostream>
#include<string.h>
using namespace std;  
main()
{
	char arr[] = {"hello"};
	char temp[100];
	//strcpy(temp, arr);
	//doing manually.
	int i;
	for(i = 0; arr[i] != '\0'; i++)
	{
		temp[i] = arr[i];
	}
	temp[i] = '\0';
	cout<<temp;
}
