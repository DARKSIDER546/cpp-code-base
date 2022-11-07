#include<iostream>
//1/1+ 2/2 +3/3 + 4/4 + 5/5
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
		int i,
		float sum = 0;
		for(i  = 1; i <=5; i++)
		{
			int ans = fun(i);
			sum = sum + (float)i/ans;
		}
		cout<<sum<<" ";
	}

