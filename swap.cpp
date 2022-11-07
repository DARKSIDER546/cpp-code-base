#include<iostream>
#include<math.h>
using namespace std;
main()
{
   int num, count = 0;
   cout<<"enter the number : ";
   cin>>num;
   int t = num;
   int last = num % 10;
   while(num >= 10)
   {
   		num = num / 10;
   		count++;
   }
   int first = num;
   num = t;
   cout<<"count : "<<count<<endl;
   cout<<"last : "<<last<<endl;
   cout<<"first : "<<first<<endl;
   num = num / 10;
   cout<<"num = : "<<num<<endl;
   int mid = num % (int)pow(10, count -1);
   cout<<"mid : "<<mid<<endl;
   cout<<"number : "<<last * (int)pow(10,count) + mid * 10 + first; 
}

