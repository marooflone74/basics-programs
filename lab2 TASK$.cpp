// formulas   fahrenhiet=(C*9/5)-32 &and for kelvin (C-273.15)


#include<iostream>
using namespace std;
int main()
{
	double Celsius,Kelvin,Fahrenheit;
	cout<<" enter your tempreture in celcius:";
	cin>>Celsius;
	
	Fahrenheit=(Celsius*9.0/5.0)+32;
	Kelvin=(Celsius-273.15);
	cout<<" the tempreture in fahrenheit is:"<<Fahrenheit<<endl;
	cout<<" the tempreture in kelvin is :"<<Kelvin<<endl;
	return 0;
}
	


