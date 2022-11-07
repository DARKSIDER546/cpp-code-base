#include<iostream>
using namespace std;
main()
{  
    int num;
    for(num = 10; num <= 100; num++)
    {
	int sum = 0;
	int t = num;
	while(num > 0)
	{
	int r = num % 10;
	sum = sum*10 + r;
	num = num / 10;
    }
    num = t;
    if(t == sum)
    {
    	cout<<sum<<"palendrome"<<endl;
	}
}
}
