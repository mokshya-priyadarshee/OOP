/*Create a class TIME with members hour, minute and second. Write a program that adds two
time objects.The objects must be passed as function arguments.*/
#include<iostream>
using namespace std;
class time 
{
	int h,m,s;
	public:
		void get();
		void add(time);
		void display();
};
void time::get()
{
	cin>>h>>m>>s;
}
void time::add(time x)
{
	int cm,ch;
	s=s+x.s;
	if(s>=60)
	{
		cm=s/60;
		s=s%60;
	}
	m=m+cm+x.m;
	if(m>=60)
	{
		ch=m/60;
		m=m%60;
	}
	h=ch+h+x.h;
	
}
void time::display()
{
	cout<<h<<":"<<m<<":"<<s<<endl;
}
int main()
{
	time t1,t2;
	cout<<"Enter time in hours,minutes and second"<<endl;
	t1.get();
	cout<<"Enter time in hours,minutes and second"<<endl;
	t2.get();
	cout<<"First Time :";
	t1.display();
	cout<<"Second Time :";
	t2.display();
	t1.add(t2);
	cout<<"Resultant Time after addition:";
	t1.display();
}
