/*(this Pointer) Write a program to display the contains of an object, when local variable’s
name is same as member’s name by using this pointer.*/
#include<iostream>
using namespace std;
class test
{
    int x;
    public:
    void get(int x)
    {
        this->x=x;
    }
    void put()
    {
        cout<<"Value of X:"<<x<<endl;
    }
};
int main()
{
    cout<<"Enter a value\n";
    int a;
    cin>>a;
    test t;
    t.get(a);
    t.put();
}