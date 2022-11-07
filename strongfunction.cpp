#include<iostream>
using namespace std;
int factorial(int r)
{
	int i, f = 1;
	for(i = r; i > 0; i--)
	{
		f = f * i;
	}
	return f;
}
int fun(int num)
{ 
    int sum = 0;
	while(num > 0)
	{
	    int r = num % 10;
	    sum = sum + factorial(r);
	    num = num / 10;
    }
    return sum;
}
main()
{
	int num;
	cout<<"enter the number : ";
	cin>>num;
	int ans = fun(num);
	if(ans == num)
	{
		cout<<"strong"<<endl;
	}
	else
	{
		cout<<"not strong"<<endl;
	}
}
