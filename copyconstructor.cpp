#include<iostream>
using namespace std;
class abc
{
	int a  =  0;                      // Instance Variable 
 	public:
 		abc()
 		{
 			
		}
		void fun()
		{
			a  =  30;
		}
		abc(abc &x)
		{
			a = x.a;
		}	
		void show()
		{
			cout<<"a  =  "<<a;
		}
};
main()
{
	abc obj;
	obj.fun();
	abc obj1(obj);
	obj1.show();
}

