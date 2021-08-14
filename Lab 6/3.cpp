 /*(Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member
functions for this class to calculate the volume of the cylinder. Show the result by accessing
the area method of circle and rectangle through object of rectangle class and the area of circle
and volume method of cylinder class through the objects of cylinder class.*/
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
        cout<<"The area of the circle is "<<ar<<endl;
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
        cout<<"Area of the rectangle: "<<ar<<endl;
    }
};
class CYLINDER:public CIRCLE
{
    protected:
    int h;
    float v;
    public:
    CYLINDER(int x,int y):CIRCLE(x)
    {
        h=y;
    }
    void volume()
    {
        v=3.14*r*r*h;
        cout<<"Volume of Cylinder: "<<v<<endl;
    }
};
int main()
{
    int l,b,h;
    cout<<"Enter the raduis/length and breadth"<<endl;
    cin>>l>>b;
    RECTANGLE r(l,b);
    r.CIRCLE::area();
    r.area();
    cout<<"Enter the raduis and height"<<endl;
    cin>>l>>h;
    CYLINDER c(l,h);
    c.area();
    c.volume();
}

