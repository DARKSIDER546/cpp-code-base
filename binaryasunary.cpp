#include<iostream>
using namespace std;
class test 
{
	int a,b,c;
	public:
		void fun()
		{
			a = 10;
			b  = -20;
			c = 30;
		}
		void show()
		{
			cout<<" a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
		}
		test operator-()
		{
			test obj;
			obj.a = -a;
			obj.b = -b;
			obj.c = -c;
			return obj;
		}
};
main()
{
	test t1, t2;
	t1.fun();
	t1.show();
	t2 = -t1;
	//t1.operator-();
	t2.show();
}
