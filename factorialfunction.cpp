#include<iostream>
using namespace std;
int fun(int x)
{
	int i , f = 1;
	for(i = x; i > 0; i--)
	{
		f = f * i;
	}
	return f;
}
main()
	{
		int num = 5;
		int ans = fun(num);
		cout<<ans<<endl;
	}

