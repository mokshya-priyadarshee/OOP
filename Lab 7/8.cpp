/*Write a program to create a class having two integer data members, now initialize and then add
10 to each data member using operator function where operator function can be called when
you write the following statement inside main function a1+5, 10+a;*/
#include<iostream>
#include<string.h>
using namespace std;
class oper
{
    int a,b;
    public:
    oper(int a1,int b1)
    {
        a=a1;
        b=b1;
    }
    void operator+(int n)
    {
        a=a+n;
        b=b+n;
    }
    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    friend void operator+(int n,oper &o);
};
void operator+(int n,oper &o)
{
    o.a=o.a+n;
    o.b=o.b+n;
}
int main()
{
    int x,y;
    cout<<"Enter two numbers for the class\n";
    cin>>x>>y;
    oper a1(x,y);
    cout<<"Result after executing a1+5\n";
    a1+5;
    a1.display();
    cout<<"Enter two numbers for the class\n";
    cin>>x>>y;
    oper a(x,y);
    cout<<"Result after executing 10+a\n";
    10+a;
    a.display();
}