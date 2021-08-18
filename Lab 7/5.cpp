/*Write a program to design a class representing complex numbers and having functionality of
performing addition and multiplication of two complex numbers using operator overloading.*/
#include<iostream>
using namespace std;
class Complex
{
    int r,i;
    public:
    Complex(int a,int b)
    {
        r=a;
        i=b;
    }
    Complex operator *(Complex b)
    {
        Complex t(0,0);
        t.i=i*b.i;
        t.r=r*b.r;
        return t;
    }
    Complex operator +(Complex b)
    {
        Complex t(0,0);
        t.i=i+b.i;
        t.r=r+b.r;
        return t;
    }
    void display()
    {
        cout<<r<<"+i("<<i<<")"<<endl;;
    }
};
int main()
{
    cout<<"Enter the real and imaginary part of the first number\n";
    int r,im;
    cin>>r>>im;
    Complex c1(r,im);
    cout<<"Enter the real and imaginary part of the second number\n";
    cin>>r>>im;
    Complex c2(r,im);
    Complex c3(0,0),c4(0,0);
    c3=c1+c2;
    c4=c1*c2;
    cout<<"Result of addition: ";
    c3.display();
    cout<<"Result of multiplication: ";
    c4.display();
}