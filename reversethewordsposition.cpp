#include<iostream>
using namespace std;
void fun(string str)
{
	str = ' ' + str;
	int i;
	string g = "";
	for(i = str.length()-1; i >= 0; i--)
	{
		char ch = str[i];
		if(ch == ' ')
		{
			cout<<g<<" ";
			g = "";
		}
		else
		{
			g = ch + g;
		}
	}
}
main()
{
	string str = "hello how are you";
	fun(str);
}