/*Write a program to find out area or volume of an shape/object by using one function name as
FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
the function, then it will display appropriate message.*/
#include <iostream>
using namespace std;
void FUN_AREA();
void FUN_AREA(int);
void FUN_AREA(int,int);
void FUN_AREA(int,int,int);
int main()
{
	int r,l,b,h;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>r;
	FUN_AREA(r);
	cout<<"Enter the length and breadth of the rectangle"<<endl;
	cin>>l>>b;
	FUN_AREA(l,b);
	cout<<"Enter the length, breadth, and height of the box"<<endl;
	cin>>l>>b>>h;
	FUN_AREA(l,b,h);
	cout<<"Output when no argument is passed to the function"<<endl;
	FUN_AREA();
}
void FUN_AREA()
{
	cout<<"PLease enter atleast one argument"<<endl;
}
void FUN_AREA(int r)
{
	float a=3.14*r*r;
	cout<<"The area of the circle is "<<a<<endl;
}
void FUN_AREA(int l,int b)
{
	float a=l*b;
	cout<<"The area of the rectangle is "<<a<<endl;
}
void FUN_AREA(int l,int b,int h)
{
	float v=l*b*h;
	cout<<"The volume of the box is "<<v<<endl;
}
