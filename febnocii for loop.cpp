#include<iostream>
using namespace std;
int main(){
	int first,second,next;
	cout<<"enter a value of a and b";
	cin>>first>>second;
	
	for(int i=1;i<=5;i++)
	{
		next=first+second;
		first=second;
		second=next;
		cout<<next<<endl;
	}
	cout<<endl;
return 0;
}
