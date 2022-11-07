#include<iostream>
using namespace std;
class abc
{
	int a;
	public:
	void fun()
	{
		a  =  10;	
	}
	void show()
	{
		cout<<a;
	}
	friend void test(abc &obj);	 //can access the private member outside the class.
};
void test(abc &obj)
{
	obj.a  =  90;
}
main()
{
	abc obj;
	obj.fun();
	test(obj);
	obj.show();
}

