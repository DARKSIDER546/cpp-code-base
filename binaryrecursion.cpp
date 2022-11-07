#include<iostream>
using namespace std;
int sum = 0;
int fun(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else
	{
	    int r = num % 2;
	    fun(num / 2);
		sum = sum  * 10 + r;			
	}
}
main()
	{
		int num = 25;
		int ans = fun(num);
		cout<<ans;
	}

