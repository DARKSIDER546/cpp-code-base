#include<iostream>
using namespace std;
int digit(int num)
{
	int count = 0;
	while(num > 0)
	{
		count++;
		num = num / 10;
	}
      return count;
}
int power(int r, int c)
{
	int f = 1,i;
	for(i = 1; i < c; i++)
	{
		f = f * i;
	}
	return f;
}
int fun(int num)
{
	int count = digit(num);
	int sum = 0;
	while(num > 0)
	{
		int r = num % 10;
		sum = sum + power(r,count);
		num = num / 10;
	}
	return sum;
}
main()
{
	int num;
	cin>>num;
	int sum = fun(num);
	if(sum == num)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not armstrong";
	}
}
