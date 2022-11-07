#include<iostream>
using namespace std;
main()
{
	int a = 10;
	cout<<&a<<endl; // for finding address use &.
	int *p = &a; // storing the address of a. 
	cout<<p<<endl;
	cout<<*p<<endl; // star* means value at that address.
	*p = 56;
	cout<<a<<endl;
	cout<<&p<<endl; // for address of p.   
	int **q = &p;
	cout<<q<<endl;
	cout<<*q<<endl;
	cout<<**q<<endl; 
}

