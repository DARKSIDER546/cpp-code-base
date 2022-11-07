#include<iostream>
//this pointer points to current class element. //used too diffirentiatee between local and instance variable.
using namespace std;
class abc
{
	int a;
	public:
		void fun(int a)         //local variable
		{
			this->a = a;
		}
		void show()
		{
			cout<<"a = "<<a;
		}
};
main()
{
	abc obj;
	obj.fun(67);
	obj.show();
}
