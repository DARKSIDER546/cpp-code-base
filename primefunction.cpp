#include<iostream>
using namespace std;
bool fun(int num)
{
	int i;
	for(i  =  2 ; i < num ; i++)
	{
		if(num% i ==0)
		{
			return false;
		}
	}
	return true;
}
main()
{
	int  num;
	cout<<"enter the number : ";
	cin>>num;
	bool ans = fun(num);
	if(ans == true)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
