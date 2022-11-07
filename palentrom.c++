#include<iostream>
using namespace std;
main()
{   
    int sum = 0;
	int num = 1234;
	while(num > 0)
	{
	int r = num % 10;
	sum = sum*10 + r;
	num = num / 10;
    }
    cout<<sum;
}
