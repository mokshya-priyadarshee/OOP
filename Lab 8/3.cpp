/*(Pointers to derived classes) Write a program to illustrate how pointers to a base class is used
for both base and derived class*/
#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    void virtual get()
    {
        cout<<"Enter a value for base class variable\n";
        cin>>x;
    }
    void virtual put()
    {
        cout<<"Value of X (Base Class):"<<x<<endl;
    }
};
class derived: public base
{
    int y;
    public:
    void get()
    {
        cout<<"Enter a value for derived class variable\n";
        cin>>y;
    }
    void put()
    {
        cout<<"Value of Class varaible(Derived Class):"<<y<<endl;
    }
};
int main()
{
    base *b,ba;
    derived d;
    b=&ba;
    b->get();
    b->put();
    b=&d;
    b->get();
    b->put();
}