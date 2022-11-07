#include<iostream>
using namespace std;
main()
{
	int i,j;
	for(i = 0; i < 5; i++)  //number of rows
	{
		for(j = i; j >= 0; j--) //star printing
      //for(j = 0; j <= i; j++)
		{
			cout<<"*";
		  //cout<<j;
		  //cout<<i;       
		}
		cout<<endl;
	}
}
