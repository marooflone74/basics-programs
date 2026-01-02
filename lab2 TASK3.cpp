// program to convert length in centimeter..
#include<iostream>
using namespace std;
int main()
{
	int feet=0;
	int inches=0;
	double centimeter=0;
	cout<<" enter the value of feet:"<<endl;
	cin>>feet;
	cout<<" enter the value of inches:"<<endl;
	cin>>inches;
	centimeter=(feet*30.48)+(inches*2.54);// 1 foot =30.48 &1 inch=2.54..
	cout<<" the length in centimeter you entered:"<<centimeter<<endl;
	return 0;
}
