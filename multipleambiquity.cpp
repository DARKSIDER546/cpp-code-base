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
class xyz
{
	public:
		void fun()
		{
			cout<<"hiii";
		}
};
class mmm : public abc , public xyz
{
	public:
	//	void fun()   //over riding
	//	{
	//		cout<<"ppp";
	//	}
		void gun()
		{
			cout<<"kkk";
		}
};
main()
{
	mmm obj;
	obj.fun();
}
