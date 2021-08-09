/*Create a class 'COMPLEX' to hold a complex number. Write a friend function to add two
complex numbers. Write a main function to add two COMPLEX objects..*/
#include <iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	friend int add(complex,complex,complex &);
	void get()
		{
			cout<<"Enter the real part of the number"<<endl;
			cin>>r;
			cout<<"Enter the imaginary part"<<endl;
			cin>>i;
		}
		void display()
		{
			cout<<r<<"+("<<i<<")i"<<endl;
		}
};
int add(complex c1,complex c2,complex &c3)
{
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
}
int main()
{
	complex c1,c2,c3;
	c1.get();
	c2.get();
	add(c1,c2,c3);
	cout<<"The result after addition"<<endl;
	c3.display();
}
