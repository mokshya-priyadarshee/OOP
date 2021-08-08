/*Write a program to find out the area of one rectangle and one square by using a suitable friend
function named as area() for it.*/
#include <iostream>
using namespace std;
class area
{
	int l,b,s,ar,as;
	public:
		friend  void areaf(area &af);
		void get()
		{
			cout<<"Enter the length and breadth of the rectangle"<<endl;
			cin>>l>>b;
			cout<<"Enter the side of the square"<<endl;
			cin>>s;
		}
		void display()
		{
			cout<<"Area of Rectangle: "<<endl<<ar<<endl;
			cout<<"Area of the square:"<<endl<<as<<endl;
		}
};
void areaf(area &af)
{
	af.ar=af.l*af.b;
	af.as=af.s*af.s;
}
int main()
{
	area a;
	a.get();
	areaf(a);
	a.display();
}
