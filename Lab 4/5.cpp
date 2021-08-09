/*Create two classes DM and DB which store the value of distances. DM stores distances in
meters and centimeters and DB in feet and inches. Write a program that can read values for
the class objects and add one object of Dm with another object of DB. Use friend function to
carry out the operation. The object that stores the results may be a DM object or DB object,
depending on the units in which the results are required. The display should in the format of
feet and inches or meters and centimeters depending on the object on display.*/
#include <iostream>
using namespace std;
class DM;
class DB
{
	float f,i;
	public:
		friend void convertadd(DM &,DB &,int ch);
	void get()
		{
			cout<<"Enter distance in feet and inches"<<endl;
			cin>>f>>i;
		}
	void display()
	{
		cout<<f<<" Feets and "<<i<<" inches"<<endl;
	}
		
};
class DM
{
	float m,c;
	public:
		friend void convertadd(DM &,DB &,int ch);
		void get()
		{
			cout<<"Enter distance in meters and centimeters"<<endl;
			cin>>m>>c;
		}
		void display()
		{
			cout<<m<<" meters and "<<c<<" centimeters"<<endl;
		}
};
void convertadd(DM &a,DB &b,int ch)
{
	if(ch==1)
	{	
		a.c=a.c+b.f*30.48+b.i*2.54;
		a.m=a.m+a.c/100;
		a.c=(int)a.c%100;
	}
	if (ch==2)
	{
		b.i=b.i+(float)a.m*39.3701+(float)a.c*0.393701;
		b.f=b.f+(int)b.i/12;
		b.i=(int)b.i%12;
	}
}
int main()
{
	DM M;
	DB B;
	int ch;
	cout<<"First enter a distance in m and cm and then in feets and inches"<<endl;
	M.get();
	B.get();
	cout<<"1.Show addition result in m and cm"<<endl;
	cout<<"2.Show addition result in feets and inches"<<endl;
	cout<<"Enter you choice"<<endl;
	cin>>ch;
	convertadd(M,B,ch);
	cout<<"Result after addition"<<endl;
	if(ch==1)
	M.display();
	else if (ch==2)
	B.display();
}
