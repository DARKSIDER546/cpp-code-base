#include<iostream>
using namespace std;
//late binding will call at the runtime//early binding. will call at the complile time.
//by using virutal function it will be late binding and will call at the runtime.
class abc
{
	public:
	virtual void fun()
	{
		cout<<"hello";	
	}	
};
class xyz : public abc
{
	public :
		void fun()
		{
			cout<<"hiii";
		}
};
main()
{
	abc *ptr;
	xyz  obj;
	ptr  =  &obj;
	ptr->fun();
}

