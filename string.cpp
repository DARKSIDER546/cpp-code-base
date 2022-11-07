#include<iostream>
#include<string>
using namespace std;  
main()
{  
	char arr[100] //= {"HeLLo"};
	//cin>>arr;
    gets(arr);  //for multiword string for C.
	//strupr(arr);
	int i;
	for(i = 0; arr[i] != '\0'; i++)
	{
		//cout<<(char)(arr[i]-32); // type casting.
        char ch = arr[i];
        if(ch >= 65 && ch <= 90)
        {
        	ch = (char)ch + 32;
		}
		else if(ch >= 97 && ch <= 122)
		{
			ch = (char)ch - 32;
		}
		arr[i] = ch;
	}
	cout<<arr;	
}
