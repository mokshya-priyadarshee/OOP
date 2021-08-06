/*Define a class called Triangle, with two fields as base and height to calculate the area of a
triangle. The class contains two methods such as getData() to initialize the fields of a triangle
and areaTrin() to calculate the area of a triangle. Write a program to find out area of 10
triangles.*/
#include <iostream>
using namespace std;
class Triangle
{
	int base,height;
	public:
		void getData()
		{
			cout<<"Enter the base and height of the rectangle\n"<<endl;
			cin>>base;
			cin>>height;
		
		}
		void areaTrin()
		{
			float area=(1.0/2)*base*height;
			cout<<"Area of the traingle is "<<area<<endl;
		}
};
int main()
{
	cout<<"Enter details for 10 traingles"<<endl;
	Triangle t[10];
	for(int i=0;i<10;i++)
	{
		t[i].getData();
		t[i].areaTrin();
	}
}
