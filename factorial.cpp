#include<iostream>
using namespace std;
main()
{
	int num = 145,i;
	int sum = 0;
	int t = num;
	while(num > 0)
	{
		int r = num % 10;
		int f = 1;
		for(i = r; i > 0; i--)
		{
			f = f * i;
		}
	    //cout<<f<<endl;
	    sum = sum + f;
		num = num / 10;
	}
	if(t == sum)
	{
		cout<<"strong";
	}
	else
	{
		cout<<"not strong";
	}
}
