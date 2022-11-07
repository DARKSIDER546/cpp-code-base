#include<iostream>
using namespace std;
int fun(int num)
{
	if(num <= 1)
	{
		return 1;
	}
	else
	{
		return num * fun(num - 1);
	}
}
main()
{
	int num = 5;
    int ans = fun(num);
    cout<<ans<<endl;
}

