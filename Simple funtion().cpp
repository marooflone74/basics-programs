#include<iostream>
using namespace std;

int max_of_three(int x,int b,int y){

	if(x>y&&x>b)
	{
		return x;
	}
	else if(b>x&&b>y){
		return b;
	}
	else
	     return y;
}
int min_of_three(int x,int b,int y){

	if(x<y&&x<b)
	{
		return x;
	}
	else if(b<x&&b<y){
		return b;
	}
	else
	     return y;
}
bool  is_even(int j){
	if(j%2!=0){
	
	   return true;
    }
	else{
	
	return false;
     }
}

int main(){
	bool result;
	int num4;
	int d,e,f;
	cout<<" enter the value of num1 : ";
	cin>>d;
	cout<<" enter the value of num2 : ";
	cin>>e;
	cout<<" enter the value of num3 : ";
	cin>>f;
	cout<<" enter the value of num 4 :";
	cin>>num4;
	result=is_even(num4);
	
	cout<<"max of three number is : "<<max_of_three(e,d,f)<<endl;
	cout<<"min of three number is : "<<min_of_three(e,d,f)<<endl;
	cout<<"checking the number......."<<result<<endl;
	return 0;
}
