#include<iostream>
using namespace std;
//when function call itself is called recursion.
void fun(int x)
{
	if(x == 0)
	{
		return;
	}
	else
	{
		cout<<x;   //fun(x-1);  stack. last in first out. the output will be reversed 123.
		fun(x-1);
	}
}
main()
{
	int x = 3;
	fun(x);
}
