//program for finding area and perimeter of a rectangle

#include<iostream>

using namespace std;
int main()
{
	double Perimeter=0;
	double area=0;
	double length;0;
	double width=0;
	
	cout<<"enter the length of rectanglee:"<<endl;
	cin>>length;
	cout<<"enter the width of the rectangle:"<<endl;
	cin>>width;
	area=length*width;// formula for finding the area of rectangle;
	Perimeter=2*(length+width);//for finding perimeter of rectangle
	cout<< " the  area of the rectangle is:"<<area<<endl;
	cout<<" the perimeter of the rectangle is:"<<Perimeter;
	return 0;
}
