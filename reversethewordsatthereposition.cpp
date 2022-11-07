#include<iostream>
using namespace std;
//hello how are you
//olleh woh era uoy             // Reverse each word at there own position
//you are ho hello              // Reverse the position og each words
void  fun(string str)
{
	int i , j;
	string g  =  "";
	for(i  =  0  ; i < str.length()  ; i++)
	{
		char ch  =  str[i];
		if(ch == ' ')
		{
			cout<<g<<" ";
			g  =  "";
		}
		else
		{
			g  =  ch  + g;
		}
	}
      cout<<g;		
}
main()
{
	string str =  "hello how are you";
	//cout<<"Enter the string  :  ";
	//getline(cin , str);
	fun(str);	
}