#include<iostream>
using namespace std;
string fun(string str)
{
	string s  =  "";
	string g  =  "";
	int i , j;
	for(i  =  0  ; i  < str.length()  ; i++)
	{
		char ch  =  str[i];
		if(ch == ' ')
		{
			char f  =  s[0];
			f  =  (char)(f-32);
			g  =  g  + f;
			for(j =1; j < s.length() ; j++)
			{
				g  =  g  + s[j];
			}
			g  =  g  + " ";
			s="";
		}
		else
		{
			s  =  s  +  ch;	
		}
	}
	char f  =  s[0];
	f  =  (char)(f-32);
	g  =  g  + f;
	for(j =1; j < s.length() ; j++)
	{
		g  =  g  + s[j];
	}
	return g;
}
main()
{
	string str  =  "hello how are you";
	string s  =  fun(str);
	cout<<s;
}