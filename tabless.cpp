#include<iostream>
using namespace std;
main()
{
	int start,end;
	cout<<"enter 2 numbers : ";
	cin>>start>>end;
	int num ,i;
	for(num = start; num <= end; num++)
	{
		for(i = 1; i<= 10; i++)
       {
	   		cout<<num * i<<" ";
	   }
	   cout<<endl;
    }
}
