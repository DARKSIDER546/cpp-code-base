#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i = 5; i >= 0; i--)
	{
		for(k = 5-i; k > 0; k--)
		{
			cout<<" ";
		}
		for(j = i*2 + 1; j > 0; j--) 
		{
			cout<<"*";	      
		}
		cout<<endl;
	}
}
