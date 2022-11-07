#include<iostream>
using namespace std;
class abc
{
	public:
	void fun();
};
class xyz
{
	public:
	void fun();	
};
void abc::fun()
{
	cout<<"hello";
}
void xyz::fun()
{
	cout<<"\nhii";
}
main()
{
	abc obj;
	obj.fun();
	xyz obj1;
	obj1.fun();
}
