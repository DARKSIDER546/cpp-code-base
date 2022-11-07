#include<iostream>
using namespace std;
int pow(int x , int b)
{
	int i, f = 1;
	for(i = 0; i < b; i++)
	{
		f = x * f;
	}
	return f;
}
main()
{
	int x,i;
	cout<<"enter the number to have power : ";
	cin>>x;
	int y;
	cout<<"enter the how times it should be sumed : ";
	cin>>y;
	int sum = 0;
	for(i = 1; i <= y; i++)
	{
		int ans = pow(x,i);
		cout<<ans<<" ";
		if(i%2==0)
		{
			sum = sum + pow(x,i); 
		}
		else
		{
		    sum = sum - pow(x,i); 
		}
    }
    cout<<endl;
	cout<<sum<<endl;
}
