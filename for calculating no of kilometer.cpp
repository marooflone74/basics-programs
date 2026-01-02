#include<iostream>
using namespace std;
int main()
{


double kmdriven=0.0;
double litresused=0.0;
double kmperlitre=0.0;
cout<<" enter the number of kilometre driven:";
cin>>kmdriven;
cout<<"fuel used";
cin>>litresused;
kmperlitre=kmdriven/litresused;
cout<<" kilometer per liters;"<<kmperlitre<<endl;

return  0;
}
