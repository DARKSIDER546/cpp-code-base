#include<iostream>
using namespace std;
main()
{
	int i;
	int a = 0 , b  = 1;
	cout<<a<<" "<<b<<" ";
	for(i = 0; i < 10; i++)
	{
	int c = a + b;
	cout<<c<<" ";
	a = b;
	b = c;
}
}
