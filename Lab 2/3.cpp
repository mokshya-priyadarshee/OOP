/*Write a program to find out the area of a circle and volume of a sphere by using function
overloading concept. (Use one function name as AREA-VOL)*/
#include <iostream>
using namespace std;
void AREA_VOL(int);
void AREA_VOL(float);
int main()
{
	int r1;
	float r2;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>r1;
	cout<<"Enter the radius of the sphere"<<endl;
	cin>>r2;
	AREA_VOL(r1);
	AREA_VOL(r2);
}
void AREA_VOL(int r)
{
	float a=3.14*r*r;
	cout<<"Area of the circle: "<<a<<endl;
}
void AREA_VOL(float r)
{
	float v=(4/3)*3.14*r*r*r;
	cout<<"Volume of the sphere: "<<v<<endl;
}
