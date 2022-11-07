#include<iostream>
using namespace std;
main()
{
   string str = "hello";
   str = str + 'g';
   str = str + "kaise ho";
   int num = 3;
   str = str + to_string(num);
   //str = str + 3;
   cout<<str;
}