// make a program to calculate maximum number 

#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enters three numbers"<<endl;
	cin>>num1>>num2>>num3;
	if(num1>=num2&&num1>=num3)
	{
		cout<<"the maximum number is:"<<num1<<endl;
	}
	else if(num2>=num1&&num2>=num3)
	{
		cout<<"the maximum number is:"<<num2<<endl;
	}
	else
	{
		cout<<"maximmum number is"<<num3<<endl;
		
	}
	
		
	  
return 0;	
}

