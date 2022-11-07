#include<iostream> 
using namespace std;
class abc
{
	public:
	int a;      // instance variable // class ka variable	
    void fun()
    {
    	a = 10;
	}
	void show()
	{
		cout<<"a = "<<a;
	}
};
main()
{
	abc obj , obj1;
	obj.fun();
	obj.show();
	
}
