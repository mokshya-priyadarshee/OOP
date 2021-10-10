/*(Virtual Function) Define a class ABC. Derive two classes BBC and KBC from ABC. All
the classes contains same member function name as display(). The base class pointer always
holds the derived class objects.
a) Write a program such that base class pointer or reference will always access/call the base
version of the members available in derived class, do not have any access to the derived
class members.
b) Write a program such that base class pointer or reference will always access/call the
derived version of the members available in derived class, do not have any access to the
base class members.
Write down the concepts used for bit a) and b) separately.*/
#include<iostream>
using namespace std;
class ABC
{
    public:
    void virtual display()
    {
        cout<<"Function of ABC Class Called\n";
    }
};
class BBC: public ABC
{
    public:
    void display()
    {
        cout<<"Function of  BBC Class Called\n";
    }
};
class KBC: public ABC
{
    public:
    void display()
    {
        cout<<"Function of KBC Class Called\n";
    }
};
int main()
{
    ABC a,*p;
    BBC b;
    KBC c;
    p=&b;
    cout<<"Now pointing to BBC Class\n";
    p->display();
    p=&c;
    cout<<"Now pointing to KBC Class\n";
    p->display();
}