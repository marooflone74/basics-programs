#include<iostream>
using namespace std;
int mult(int first,int second){
	if(first==0||second==0){
		return 0;
	}
	else
	   return  first+mult(first,second-1);
	
}
int main(){
	int a,b;
	cout<<" enter number a and b with spaces:";
	cin>>a>>b;
	int prod=mult(a,b);
	cout<<a<<" x "<<b<<" =  "<<prod<<endl;
	return 0;
}
