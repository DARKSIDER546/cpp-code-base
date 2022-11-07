 #include <string>
#include <iostream>
 
using namespace std;
 
string encoding( string msg, string key)
{
  string ans;
  int i=0;//for msg
  int j=0;//for key
  int keysize = key.size();
  int msgsize= msg.size();
  if(keysize==0 || msgsize==0)
    return "";//to be defined in question
  while(j<keysize && i<msgsize)
  {
    int count= key[j]-'0';
    for(int it=0;it<count;it++)
      ans.push_back(msg[i]);
    j++; i++;
  }
  while(i< msgsize)
  {
    ans.push_back(msg[i]);
    i++;
  }
  return ans;
}
 
string decoding(string msg, string key)
{
  string ans;
  int i=0;//for msg
  int j=0;//for key
  int keysize = key.size();
  int msgsize= msg.size();
  if(keysize==0 || msgsize==0)
  return " ";//to be defined in question
  while(i<msgsize && j<keysize)
  {
    ans.push_back(msg[i]);
    i=i+(key[j]-'0');
    j++;
  }
  while(i<msgsize)
  {
    ans.push_back(msg[i]);
    i++;
  }
  return ans;
}
 
int main()
{
  string msg= "open";
  string key= "123";
  cout<<encoding(msg,key)<<endl;
  cout<<decoding("oppeeen","123");
  return 0;
}
