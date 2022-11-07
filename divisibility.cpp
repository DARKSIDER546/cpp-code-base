#include<iostream>
using namespace std;
main()
{
	int i,count =0;
	for(i = 100; i < 1000; i++)
	{
	     if(i%2==0 && i%3==0 && i%5==0)
		{
		  cout<<"the divisible no : "<<i<<endl;
		  count++;	
		}
	}
		cout<<"total divisible No. are = "<<count<<endl;
		
	
}
