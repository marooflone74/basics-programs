#include<iostream>
using namespace std;
int main(){
	int first,second,next;
	cout<<"enter a value of a and b";
	cin>>first>>second;
	int i=1;
	while(i<=5)
		{
		next=first+second;
		first=second;
		second=next;
		cout<<second<<endl;
		i++;
	
	}
	cout<<endl;
return 0;
}
