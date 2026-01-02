#include<iostream>
using namespace std;
int main(){
	int first,second,next,i;
	cout<<"enter the value of first and second: ";
	cin>>first;
	cout<<" ";
	cin>>second;

	do{
		for(i=1;i<5;i++){
		
			next=first+second;
			first=second;
			second=next;
			cout<<next<<" ";
		}
	}
	while(i!=5);

	return 0;
}
 
