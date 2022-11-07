#include<iostream>
using namespace std;
class abc
{
	int a = 10; //private things cannot be inhereted.
	public:
		int b = 5;
		protected:
			int c = 1;
};
class xyz : public abc  // proctected abc  \\ cout<<obj.b.
{
   public:
   	void fun()
   	{
   	    cout<<c;	//proctected can be called through a fucntion. 
    }
};
main()
{
	xyz obj;
	obj.fun();
}
