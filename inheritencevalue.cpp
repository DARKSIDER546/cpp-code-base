#include <iostream>
using namespace std;
class abc
{
	int a;
	public:
    int b;
    void fun()
    {
    	a = 10;
    	b = 20;
	}
	int geta()
	{
		return a;
	}
};
class xyz : public abc
{
	int c;
	public:
		void multiply()
		{
			c = geta() * b;
		}
		void show()
		{
			cout<<"a = "<<geta()<<endl;
			cout<<"b = "<<b<<endl;
			cout<<"c = "<<c<<endl;
		}
};
main()
{
  xyz obj;
  obj.fun();
  obj.multiply();
  obj.show();
  obj.b = 40;
  obj.multiply();
  obj.show();
}
