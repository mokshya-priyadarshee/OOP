/*Define a class named as FRACTION that contains two data members that represent the
numerator and denominator of a fraction. By defining necessary member functions, write a
program to add, subtract and multiply two fractions. The add accepts the objects using callby- value
 technique, subtract using call-by-reference 
and multiply using call-by-address technique.*/
#include<iostream>
using namespace std;
class FRACTION
{
	
	 public:
	 	 int n,d;
	 	void get();
	 	void add(FRACTION);
	 	void multiply(FRACTION *F);
	 	void substract(FRACTION &F);
};
void FRACTION::get()
{
	cout<<"Enter the numerator:";
	cin>>n;
	cout<<"Enter the denominator:";
	cin>>d;
}
void FRACTION::add(FRACTION F)
{
	if(d==F.d)
	{
		n=n+F.n;
	}
	else
	{
		n=n*F.d+F.n*d;
		d=d*F.d;
	}
}
void FRACTION::substract(FRACTION &F)
{
		if(d==F.d)
	{
		n=n-F.n;
	}
	else
	{
		n=n*F.d-F.n*d;
		d=d*F.d;
	}
}
void FRACTION::multiply(FRACTION *F)
{
	n=n*F->n;
	d=d*F->d;
}
int main()
{
	FRACTION f1,f2;
	cout<<"Enter input for First Function"<<endl;
	f1.get();
	cout<<"Enter input for second function"<<endl;
	f2.get();
	FRACTION f3=f1,f4=f1;
	f1.add(f2);
	f3.substract(f2);
	f4.multiply(&f2);
	cout<<"Result of addition ="<<f1.n<<"/"<<f1.d;
	cout<<"Result of subtraction ="<<f3.n<<"/"<<f3.d;
	cout<<"Result of multiplication ="<<f4.n<<"/"<<f4.d;
}
