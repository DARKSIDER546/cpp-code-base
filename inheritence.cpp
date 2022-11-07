#include <iostream>
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
		void sun()
		{
			cout<<"hiii";
		}
};
main()
{
	xyz.obj;
	obj.sun();
	obj.fun();
}
