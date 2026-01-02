#include<iostream>
using namespace std;/*
int main(){
	int first,second,next,i,limit;
	i=0;
	cout<<" enter the limit of  fibnocii  series:";
	cin>>limit;
	cout<<"enter first value and second value:";
	cin>>first>>second;
	
	do{

		next=first+second;
		first=second;
		second=next;
		cout<<next<<" ";
	    i++;	
	}
	
	while(i<=limit);
	
	return 0;}*/
	

		
	int fib(int x, int y)
	{
		int z, i,limit;
		i=0;
		cout<<" enter the limit of  fibnocii  series:";
	    cin>>limit;
			do{

	         z=x+y;
	     	x=y;
	    	y=z;
	    	cout<<z<<" ";
	        i++;	
	}
	
	while(i<=limit);
	}
	int main(){
	    	int first,second,next,i,limit;
	    

	    cout<<"enter first value and second value:";
	    cin>>first>>second;
	    int result=fib(first,second);
	    cout<<result<<endl;
	    return 0;
	
	}

