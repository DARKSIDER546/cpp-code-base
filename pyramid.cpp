#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i = 0; i < 5; i++)
	{
		for(k = 4-i; k > 0; k--)
		{
			cout<<" ";
		}
		for(j = i; j >= 0; j--) 
		{
			cout<<"*";
			if(j != 0)
			{
				cout<<"i";
		    }      
		}
		cout<<endl;
	}
}
