#include<iostream>
using namespace std;
main()
{
	string str;
	cin>>str;
	int count = 0,i;
	for(i = 0; i < str.length(); i++)
	{
		char ch = str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		{
			count++;
		}
		else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			count++;
		}
	}
	cout<<"total vowels : "<<count;
}
//through function also
/*#include<iostream>
using namespace std;
int fun(string str)
{
	int count  =  0 , i;
	for(i  =  0  ; i < str.length()  ; i++)
	{
		char ch  =  str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'    )
		{
			count ++;
		}
		else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'    )
		{
			count ++;
		}
	}
	return count;
}
main()
{
	string str;
	cin>>str;
	int count  =  fun(str);
	cout<<"Total vowels  :  "<<count;
}
