#include<iostream>
using namespace std;
int main()
{
	 int password;
	 int attempt = 0;
	 

	while(attempt<3){
			cout<<" enter paswword:";
         	cin>>password;
		
	
	
	     if(password==1234){
		cout<<" you unlock your device"<<endl;
     	}
     	else{
	
    	cout<<" please try again:"<<endl;
         }
   
} 
     cout<<"too many attempt password locked"<<endl;
    return 0;
}
