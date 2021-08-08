/*Write a program to find out the greatest between two numbers defined in two different classes
by using friend function.*/
#include<iostream>
using namespace std;
class num
{
	int no;
	public:
		friend int greatest(num,num);
		void get()
		{
			cout<<"Enter a number"<<endl;
			cin>>no;
		}
		void display()
		{
			cout<<no;
		}
};
int greatest(num n,num m)
{
	if(n.no>m.no)
	return n.no;
	else if(n.no<m.no)
	return m.no;
}
int main()
{
	num n,m;
	n.get();
	m.get();
	cout<<"The entered number are ";
	n.display();
	cout<<" and ";
	m.display();
	cout<<endl;
	int g=greatest(n,m);
	cout<<"The greatest number is "<<g<<endl;
}
