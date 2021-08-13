/*(Multilevel Inheritance) Modify the program no. LE6.1 as follows:
Derive a class named as BOX from RECTANGLE class. Take necessary data & member
functions for this box class to calculate the volume of the box. All the data members are
initialized through the constructors. Show the result by accessing the area method of circle
and rectangle and the volume method of box class through the objects of box class.*/
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
    RECTANGLE();
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
class BOX:public RECTANGLE
{
    protected:
    int h;
    int v;
    public:
    BOX(int x):RECTANGLE(x,0)
    {}   
    BOX(int x,int y):RECTANGLE(x,y)
    {
    }
    BOX(int x,int y,int z):RECTANGLE(x,y)
    {
        h=z;
    }
    void volume()
    {
        v=r*b*h;
        cout<<"Volume of Box:"<<v<<endl;
    }
};
int main()
{
    int x,y,z;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>x;
    BOX c(x);
    c.CIRCLE::area();
    cout<<"Enter length and breadth of rectangle"<<endl;
    cin>>x>>y;
    BOX r(x,y);
    r.area();
    cout<<"Enter the length,breadth and height\n";
    cin>>x>>y>>z;
    BOX b(x,y,z);
    b.volume();
}