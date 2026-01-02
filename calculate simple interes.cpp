// make a program that calculate a simple interest  from principal and calculate rate and time

#include<iostream>
using namespace std;

int main()

{
	double simpleinterest=0.0;
	int principle=0;
	double time=0.0;
	int rate=0;
	// calculate and display on screen
	cout<<"enter the interest of principle"<<endl;
	cin>>principle;
	cout<<"enter your time"<<endl;
	cin>>time;
	cout<<"enter your rate"<<endl;
	cin>>rate;
	
	simpleinterest=principle*rate*time;
	cout<<" the simple interest is: "<<simpleinterest;
	return 0;
}
