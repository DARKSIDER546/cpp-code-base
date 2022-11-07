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
		int r = num % 10;
		sum = sum * 10 + r;
		fun(num / 10);
	}
	return sum; 
}
main()
{
     int num = 1234;
     int ans = fun(num);
     cout<<ans;
}
