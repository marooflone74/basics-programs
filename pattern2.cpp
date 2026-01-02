#include<iostream>
using namespace std;
int main()
{
  int row, column, space;
  int star=6;
  for(row=1;star>0;row++){
  	for(space=0;space>row*2;space++)
  	{
  		cout<<"  ";
	  }
	for(column=0;column<=star;column++){
		cout<<"*";
	}
	cout<<endl;
   	star-=2;
 

  } 
  	return 0;
}
