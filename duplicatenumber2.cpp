#include<iostream>
using namespace std;
//only for sorted method;
int main(){
    //int arr[] = {2 , 3 , 4 , 2 , 3 , 4 , 5 , 8 , 4};
    int  arr[]  = {1 , 2 , 2 , 2 , 4 , 4 , 4 , 5 , 5};          
    int i,count =1;
    for ( i = 0; i < 9-1; i++)
	{
		if(arr[i] == arr[i+1])
		{
			count++;
			if(i == 9-2)
			{
				cout<<arr[i]<<" comes "<<count<<" times "<<"\n";
			}
		}
        if(arr[i] == arr[i+1])
		{
            count ++;
        }
        if(arr[i] != arr[i+1])
		{
            cout<<arr[i]<<" comes "<<count<<" times "<<"\n";
            count = 1;
        }
        if(arr[i] != arr[i+1] && i == 9-2){
            cout<<arr[i+1]<<" comes "<<count<<" times "<<"\n";
        }
    }
    return 0;
}
