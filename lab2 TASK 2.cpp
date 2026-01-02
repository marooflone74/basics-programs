// for calculating marks of subject and it percetange
#include<iostream>
using namespace std;
int main()
{
	double english,urdu,arabic,math,pakStudies,obtMarks,percentage;
	int total=500;
	cout<<"enter the marks of english:"<<endl;
	cin>>english;
	cout<<"enter the mark of urdu:"<<endl;
	cin>>urdu;
	cout<<"enter the mark of arabic: "<<endl;
	cin>>arabic;
	cout<<"enter the mark of math: "<<endl;
	cin>>math;
	cout<<"enter the mark of pakStudies: "<<endl;
	cin>>pakStudies;
	
	obtMarks= english+urdu+arabic+math+pakStudies;
	cout<<" the obtanied markss of 5 subject:"<<obtMarks<<endl;
	percentage=obtMarks/total*100;
	cout<<" the percentage   of 5 subject is :"<<percentage;
	return 0;
	
}
	
