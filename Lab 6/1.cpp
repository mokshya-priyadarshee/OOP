/*(Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used
to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area
of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance
such that the radius of circle class can be re-used as length in rectangle class. Take necessary
data members and member functions for both the classes to solve this problem. All the data
members are initialized through the constructors. Show the result by accessing the area
method of both the classes through the objects of rectangle class*/
#include<iostream>
using namespace std;
class CIRCLE
{
    protected:
    int r;
    float ar;
    public:
    CIRCLE(int x)
    {
        r=x;
        ar=0;
    }
    void area()
    {
        ar=3.14*r*r;
        cout<<"The area of the circle is"<<ar<<endl;
    }
};
class RECTANGLE:public CIRCLE
{
    protected:
    int b;
    public:
    RECTANGLE(int x):CIRCLE(x)
    {}
    RECTANGLE(int x,int y):CIRCLE(x)
    {
        b=y;
    }
    void area()
    {
        ar=r*b;
        cout<<"Area of the rectangle:"<<ar<<endl;
    }
};
int main()
{
    int x,y;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>x;
    RECTANGLE c(x);
    c.CIRCLE::area();
    cout<<"Enter length and breadth of rectangle"<<endl;
    cin>>x>>y;
    RECTANGLE r(x,y);
    r.area();
}
