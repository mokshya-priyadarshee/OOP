/*Write a program to overload unary (-) operator using friend function*/
#include <iostream>
using namespace std;
class A
{
   public:
    int a;
    int b;
 
    A(int x,int y)
    {
        a=x;
        b=y;
    }
   void display()
   {
       cout<<a<<" "<<b<<endl;
   }
   friend void operator-(A &z);
};
    void operator-(A &z)
   {
    z.a=-z.a;
    z.b=-z.b;
   }
int main()
{
    cout<<"Enter two numbers\n";
    int x,y;
    cin>>x>>y;
    A a1(x,y);
    -a1;
    cout<<"After operator overloading\n";
    a1.display();
}
