#include<iostream>
using namespace std;
main()
{
	int a = 6 , b = 8,i;
	int small = a < b ? a : b;
	for(i = small; i >= 1; i--)
	{
		if(a%i==0 && b%i==0)
		{
			cout<<i;
			break;
		}
	}
}
