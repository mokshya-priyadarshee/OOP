/*Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by-
address by taking swapping of two numbers as an example.*/
#include <iostream>
using namespace std;
void callbyvalue(int,int);
void callbyreference(int &,int &);
void callbyaddress(int *,int *);
int main()
{
	int a,b;
	cout<<"Enter the value of a and b\n";
	cin>>a>>b;
	cout<<"Value before callbyvalue()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	callbyvalue(a,b);
	cout<<"Value after callbyvalue()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	cout<<"Value before callbyreference()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	callbyreference(a,b);
	cout<<"Value after callbyreference()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	cout<<"Value before callbyaddress()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	callbyaddress(&a,&b);
	cout<<"Value after callbyaddress()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
	return 0;
	
}
void callbyvalue(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value inside callbyvalue()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
}
void callbyreference(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Value inside callbyreference()\n";
	cout<<"A:"<<a<<" B:"<<b<<endl;
}
void callbyaddress(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<"Value inside callbyvalue()\n";
	cout<<"A:"<<*a<<" B:"<<*b<<endl;
}
