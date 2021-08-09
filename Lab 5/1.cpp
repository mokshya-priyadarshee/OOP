/*Write a program to perform addition of two complex numbers using constructor. Complex
numbers are given through user input.*/
#include <iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    complex(int tempr,int tempi)
    {
        r=tempr;
        i=tempi;
    }
    complex(complex c1,complex c2)
    {
        r=c1.r+c2.r;
        i=c1.i+c2.i;
    }
 /*   void sum(complex c)
    {
        r=r+c.r;
        i=i+c.i;
    }
*/
    void display()
    {
        cout<<r<<"+("<<i<<")i"<<endl;
    }
};
int main()
{
    int c1r,c2r,c1i,c2i;
    cout<<"Enter the real and imaginary parts of first complex numbers\n";
    cin>>c1r>>c1i;
    cout<<"Enter the real and imaginary parts of second complex numbers\n";
    cin>>c2r>>c2i;
    complex c1(c1r,c1i),c2(c2r,c2i);
    complex c3(c1,c2);
    cout<<"Result : ";
    c3.display();
}
