#include<iostream>
#include<string>
using namespace std;
main()
{
	string user  , pwd;
	cin>>user>>pwd;
	try
	{
		if(pwd.length() < 6)
		{
			throw(0);
		}
		int c =  0;
		for(int i  =  0  ; i  < pwd.length()  ; i++)
		{
			char ch  =  pwd[i];
			if(ch >= '0' && ch <= '9')
			{
				c++;
			}
		}
		if(c == 0 )
		{
			throw(1);
		}
		cout<<"Correct";	
	}
	catch(int x)
	{
		if(x == 0)
		{
			cout<<"Too Short";
		}
		if(x == 1)
		{
			cout<<"No Digit";
		}
	}
}
