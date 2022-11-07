#include<iostream>
using namespace std;
string fun(string str)
{
	int count  =  0 , i;
	string s = "";
	for(i  =  0  ; i < str.length() ; i++)
	{
		char ch  =  str[i];
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'    )
		{
			continue; //s = s + h;
		}
		else if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'    )
		{
			continue;  //for vowel only s = s + ch;
		}
	//	else        for making components *;
	//	{            
	//		s = s + '*';
	//	}
		s = s + ch;
	}
	return s;
}
main()
{
	string str;	
	cin>>str;
	string ans = fun(str);
//	int count  =  fun(str);
    cout<<ans.length()<<endl;
	cout<<ans;
}
