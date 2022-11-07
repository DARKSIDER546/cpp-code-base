#include<iostream>
using namespace std;
string fun(string str)
{
	string s = "";
	int i;
	for(i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		if(ch >= 'a' && ch <= 'z')
		{
			ch = (char)(ch - 32);
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = (char)(ch + 32);
		}
		s = s + ch;
	}
	return s;
}
main()
{
	string str;
	getline(cin,str); // multiword string.
	//cout<<str;
	int i;
//	for(i = 0; i < str.length(); i++) //hawi hona.
//	{
//  	cout<<str[i];
//	}
    string s = fun(str);
    cout<<"after change : "<<s;
}