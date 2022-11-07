#include<iostream>
using namespace std;
main()
{
	int num = 6;
	int i ,g = 0;
	for(i = 1; i <= num; i++)
	{
		if(num%i == 0)
		{
			cout<<i<<endl;
			g++;
		}
	}
	cout<<"total : "<<g;
}
