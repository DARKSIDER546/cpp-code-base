#include<iostream>
using namespace std;
int fun(int i)
{
	if(i == 0)
	{
		return 0;
	}
	else if(i == 1)
	{
		return 1;
	}
	else
	{
		return fun(i-2)+fun(i-1);
	}
}
main()
{
	int i;
	for(i  =  0  ; i  < 10  ; i++)
	{
		int ans  =  fun(i);
		cout<<ans<<" ";
	}	
}
