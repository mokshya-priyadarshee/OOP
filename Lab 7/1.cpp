/*Write a program to overload unary (-) operator.*/
#include <iostream>
using namespace std;
class A
{
    int a;
    int b;
    public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void operator-()
   {
    a=-a;
    b=-b;
   }
   void display()
   {
       cout<<a<<" "<<b<<endl;
   }
};
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
