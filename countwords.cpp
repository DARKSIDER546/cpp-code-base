#include<iostream>
using namespace std;
main()
{
	string str = "hello how are you";
	int i,count = 1;
	for(i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		if(ch == ' ')
		{
			count++;
		}
	}
	cout<<"total words : "<<count;
}