#include<iostream>
using namespace std;
int fun(int a , int b)
{
	if(b == 0)
	{
		return 1;
	}
	else
	{
		return a * fun(a , b - 1);
	}
}
main()
{
	int a = 2 , b = 5;
	int ans = fun(a ,b);
	cout<<ans;
}
