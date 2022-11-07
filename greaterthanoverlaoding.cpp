#include<iostream>
using namespace std;
class great
{
	int x;
	public:
		void fun(int x)
		{
		 	this->x = x;
			
		}
		void show()
		{
			cout<<x;
		}
	    great operator>(great g)
		{
		    if(x > g.x)
			{
		       	return *this;
			}
			return g;	
		}
};
main()
{
	great g1, g2, g3;
	g1.fun(10);
	g2.fun(34);
	//g3 = g1 > g2;
	g3 = g1.operator>(g2);
	g3.show(); 
}
