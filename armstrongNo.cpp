#include<iostream>
using namespace std;
main()
{
	int num = 153;
	int sum  = 0;
	int t =  num;
	while(num > 0)
	{
		int r = num % 10;
		sum = sum + r * r * r;
		num = num / 10;
	}
	if(t == sum)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not amrstrong";
	}
}
