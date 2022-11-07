#include <iostream>
using namespace std;

int main() {
	int t=0;
	cout<<"please input the how many string you want to enter : ";
	cin>>t;
	string strinput;
	
	while(t--)
	{
	    cout<<"enter string : ";
	    cin>>strinput;
	    int bcount=0;
		int acount=0;
	   	int strinputlen = strinput.length();
	  	for( int idx =0 ; idx < strinputlen ; idx++){
        	if ( strinput[idx]=='a'){
	     
	     		++acount;

	 		}else if (strinput[idx]=='b'){

	 			++bcount;
	 		}
	 	}//endoffor
	 
	 	if(acount < bcount){
	 		cout<<acount;
	 	}else{
	 		cout<< bcount;
	 	}
      
	     
	 }//endofwhile

	 
	   
	return 0;
}