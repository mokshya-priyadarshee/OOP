/*Write a program that adds two complex numbers. The objects must be passed as function
arguments.*/
#include <iostream>
using namespace std;
class complex
{
	int r,i;
	public:
		void get();
		void display();
		void add(complex);
};
void complex::get()
{
	cout<<"Enter the real and imaginary part"<<endl;
	cin>>r;
	cin>>i;
}
void complex::add(complex x)
{
	r=r+x.r;
	i=i+x.i;
}
void complex::display()
{
	cout<<r<<"+"<<i<<"i";
}
int main()
{
	complex c1,c2;
	cout<<"Enter the first number"<<endl;
	c1.get();
	cout<<"Enter the second number"<<endl;
	c2.get();
	cout<<"First Number :";
	c1.display();
	cout<<endl<<"Second Number :";
	c2.display();
	cout<<endl;
	c1.add(c2);
	cout<<"The sum of the numbers is ";
	c1.display();
}
