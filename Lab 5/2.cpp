/*Write a program to perform addition of two complex numbers using constructor overloading.
The first constructor which takes no argument is used to create objects which are not
initialized, second which takes one argument is used to initialize real and imaginary parts to
equal values and third which takes two argument is used to initialize real and imaginary to
two different values.*/
#include<iostream>
using namespace std;
class complex 
{
    int r,i;
    public:
    complex()
    {
        
    }
    complex(int n)
    {
        r=n;
        i=n;
    }
    complex(int m,int n)
    {
        r=m;
        i=n;
    }
    void add(complex c1,complex c2)
    {
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
    void display()
    {
        cout<<r<<"+ "<<i<<"i"<<endl;
    }
};
int main()
{
    int a,b,c;
    complex c1;
    cout<<"Enter the value of argument for second constructor\n";
    cin>>a;
    complex c2(a);
    printf("Enter the value of arguments for third constructor\n");
    cin>>b>>c;
    complex c3(b,c);
    c1.add(c2,c3);
    cout<<"Result of addition: ";
    c1.display();
}