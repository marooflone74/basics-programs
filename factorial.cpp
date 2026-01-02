#include<iostream>
using namespace std;
int main(){
	int i,num;
	cout<<" enter a int number:";
	cin>>num;
	long long fact=1;

	if(num<0){
	
	 cout<<"error!! enter a valid number:"<<endl;}
	else
		for(i=1;i<=num;i++)
		{
			
			fact=fact*i;
			cout<<fact<<endl;
		}
	
	
	return 0;
}
