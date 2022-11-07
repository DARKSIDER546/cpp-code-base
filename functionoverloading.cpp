#include<iostream>
using namespace std;
class abc
{
	public:
		void fun()
		{
			cout<<"hello";
		}
};
class xyz : public abc
{
	public:
		void fun()
		{
			abc::fun();
			cout<<"hii";
		}
};
main()
{
	xyz obj;
	obj.fun();
}
