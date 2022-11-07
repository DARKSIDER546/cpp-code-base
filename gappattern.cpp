#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i = 0; i < 5; i++)
	{
		for(k = 0; k < 5-i; k++)
		{
			cout<<" ";
		}
		for(j = i; j >= 0; j--) 
		{
			cout<<"*";      
		}
		cout<<endl;
	}
}
