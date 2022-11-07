#include<iostream>
using namespace std;
main()
{
	int num = 5, i;
	for(num = 3; num <= 7; num++)
	{
		int f = 1;
	for(i = num; i > 0; i--)
	{
		f = i * f;
	}
	cout<<f<<endl;
	}
}
