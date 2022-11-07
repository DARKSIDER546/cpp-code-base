#include<iostream>
using namespace std;
class time
{
	int hr , min;
	public:
		void fun(int h , int m)
		{
		   hr = h;
		   min = m;		
		}
		void show()
		{
			cout<<hr<<" : "<<min<<endl;
		}
		time operator+(time x)
		{
			time obj;
			obj.hr = hr + x.hr;
			obj.min = min + x.min;
			return obj;
		}		
};
main()
{
    time t1 ,t2, t3;
    t1.fun(4,40);
    t2.fun(5,45);
    //t3 = t1.sum(t2); 
    //t3 = t1 + t2; //operator overloading;
    t3 = t1.operator+(t2);
    t3.show();
}
