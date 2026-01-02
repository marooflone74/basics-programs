// program for calcullating new pay and new raise rate..
#include<iostream>
using namespace std;
int main()
{
	// declaring the variable 
	double currentpay = 0.0;
	double raise =0.0;
	double newpay =0.0;
	double raiserate =0.0;
	// calculating current pay, raise rate and display on screen...
	cout<<"enter current pay"<<endl;
	cin>>currentpay;
	cout<<" enter current raise"<<endl;
	cin>>raise;
	
	
	raiserate=currentpay*raise;
	newpay=raiserate+currentpay;
	
	cout<<"newpay"<<newpay;
	return 0;
}
