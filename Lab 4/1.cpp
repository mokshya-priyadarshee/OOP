/*Write a program to find out the area of an rectangle through friend function and member
function separately of Rectangle class.*/
#include <iostream>
using namespace std;
class rect
{
	int l,b,a;
	public:
		void get()
		{
			cout<<"Enter the value of l and b";
			cin>>l>>b;
		}
		void area()
		{
			a=l*b;
		}
		void display()
		{
			cout<<"Area of the rectangle is "<<a<<endl;
		}

		friend void frndarea(rect &rc);
};
void frndarea(rect &rc)
{
	rc.a=rc.l*rc.b;
}
int main()
{
	cout<<"For the member function"<<endl;
	rect r;
	r.get();
	r.area();
	r.display();
	cout<<"For friend function"<<endl;
	r.get();
	frndarea(r);
	r.display();
}
