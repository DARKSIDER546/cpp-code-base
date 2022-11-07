#include<iostream>
using namespace std;
class timer
{
	int hr , min;
	public:
	
	void fun(int h  , int m)
	{
		hr  =  h;
		min  =  m;
	}
	void show()
	{
		cout<<hr<<" : "<<min<<endl;
	}
	timer sum(timer p)
	{
		timer obj;
		obj.hr  =  hr  +  p.hr;
		obj.min  =   min  +  p.min;
		return obj;
	}	
};
main()
{
	timer t1  , t2 , t3;
	t1.fun(4,40);
	t2.fun(5,45);
	t1.show();
	t2.show();
	t3  =  t1.sum(t2);
	t3.show();
	
	
}
