#include<iostream>
using namespace std;
main()
{
	int num,i;
	int count = 0;
	for(num = 2; num <= 100; num++) 
	{
	for(i = 2; i < num; i++)
	{
		if(num%i==0)
		{
			//cout<<"not prime"<<endl;
			break;
		}
	}
	if( i == num)
	{
		cout<<num<<" = prime"<<endl;
		count++;
	}
	if(count == 10)
	{
		break;
	}
}
     cout<<"total = "<<count;
}
