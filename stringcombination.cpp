#include<iostream>
#include<string.h>
using namespace std;  
main()
{
	char str1[100] = {"Khalsa"};
	char str2[100] = {"College"};
//	strcat(str1, str2);
   int i;
   int length = strlen(str1);
   for(i = 0; str2[i] != '\0'; i++)
   {
   	  str1[i+length] = str2[i];
   }
    str1[i + length] = '\0';
	cout<<str1;
}
