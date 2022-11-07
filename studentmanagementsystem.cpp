#include <iostream>
using namespace std;
class tester
{
	int id;
	string name;
	public:
	void input()
	{
		cout<<"Enter the id  :  ";
		cin>>id;
		cout<<"Enter the name "	;
		cin>>name;
	}	
	void show()
	{
		cout<<id<<"\t"<<name<<endl;
	}
};
int main()
{
    tester obj[3];        // Array Of objects
    int i;
    for(i  =  0  ; i  < 3  ; i++)
    {
    	obj[i].input();
	}
	cout<<"ID\tNAME\n";
	cout<<"-----------------"<<endl;
	for(i  =  0 ; i <  3  ; i++)
	{
		obj[i].show();
	}
    cout<<"-----------------"<<endl;
    return 0;
}
