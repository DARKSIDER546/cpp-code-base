#include<iostream>
using namespace std;
main()
{
	int a = 4 , b = 6,i;
	int big = a > b ? a : b;
	for(i = big; i <= a * b; i++)
	{
		if(i%a==0 && i%b==0)
		{
			cout<<i;
			break;
		}
	}
}
