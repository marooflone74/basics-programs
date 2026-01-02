#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int factorial(int& x){
	x=7;
	int fact,i,num,result;
	fact=1;
	for(i=1;i<=num;i++){
    	fact=fact*i;
	}
    cout<<" factorial of a number"<<x<<" is "<<result<<endl;
	return fact;
	}
int main(){
	int result,num;
	cout<<" enter a number:";
	cin>>num;
    cout<<num;
	result=factorial(num);
	
	cout<<" factorial of a number"<<num<<" is "<<result<<endl;
	return 0;
}


