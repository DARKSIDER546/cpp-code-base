#include<iostream>
#include<string.h>
using namespace std;  
main()
{
    char arr[100];
	gets(arr);
	//int lenght = strlen(arr);	
	//doing manually;
 	int i;
	for(i = 0; arr[i] != '\0'; i++);
	cout<<"lenght : "<<i; 

}

