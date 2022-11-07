#include<iostream>
using namespace std;
string fun(string str)
{
	int i;
	string s = "";
	char first = str[0];
	char last = str[str.length() - 1];
	if(first >= 97 && first <= 122)
	{
	    first = (char)(first - 32);
	}
	if(last >= 97 && last <= 122)
	{
		last = (char)(last - 32);
	}
	s = s + first;
	for(i = 1; i < str.length() -1; i++)
	{
		s = s + str[i];
	}
	 s = s + last;
	 return s;
}
	
main()
{
	string str;
	getline(cin,str);
	string ans = fun(str);
	cout<<ans;	
}