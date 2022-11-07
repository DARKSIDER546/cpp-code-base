#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int num;
    cin>>num;
    int t = num;
    int count = 0;
    while(num > 0)
    {
    	count++;
    	num = num / 10;
	}
cout<<"NO.of digit : "<<count<<endl;
int sum = 0; 
num = t;
while(num > 0)
{
  int r = num % 10;
  sum = sum + pow(r,count);
  num = num / 10;	
}
if(t == sum)
{
	cout<<"armstrong";
}
else
{
	cout<<"not armstrong";
}
}
