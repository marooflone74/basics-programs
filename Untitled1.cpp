#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	const double PI=3.14;
	double height=4.0;
	double radius=2.4;
	cout<<fixed<<showpoint;
	cout<<setprecision(2);
	cout<<"line  10: setprecision(2)"<<endl;
	cout<<"line  11: "<<radius<<endl;
	cout<<"line no 12 : "<<height<<endl;
	cout<<"line  13: volume="<<PI*radius*radius*height<<endl<<endl;
	cout <<" line no 14:PI = "<<PI<<endl<<endl;
		cout<<setprecision(3);
	cout<<"line  15: setprecision(3)"<<endl;
	cout<<"line  16: "<<radius<<endl;
	cout<<"line no 17 : "<<height<<endl;
	cout<<"line  18: volume="<<PI*radius*radius*height<<endl<<endl;
	cout <<" line no 19:PI = "<<PI<<endl<<endl;
			cout<<setprecision(4);
	cout<<"line  20: setprecision(4)"<<endl;
	cout<<"line  21: "<<radius<<endl;
	cout<<"line no 22 : "<<height<<endl;
	cout<<"line  23: volume="<<PI*radius*radius*height<<endl<<endl;
	cout <<" line no 24:PI = "<<PI<<endl<<endl;
	
	cout<<"line  no 25 :"<<setprecision(2)<<setw(10)<<setfill('*')<<radius<<","<<setprecision(3)<<height<<","<<setprecision(5)<<PI<<endl;
	
	return 0;
	
	
	
	
	
}
