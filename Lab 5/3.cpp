/*Create a 'DISTANCE' class with the following members:
Data Members
b) feet and inches
Member Functions
d) To input distance through constructor
e) To output distance
f) To add two distance objects
Write a main function to create objects of DISTANCE class. Input two distances (one through
implicit call and other explicit call and output the sum.*/
#include<iostream>
using namespace std;
class distance1
{
    int feet,inches;
    public:
    distance1()
    {

    }
    distance1(int a,int b)
    {
        feet=a;
        inches=b;
    }
    void get()
    {
        printf("Enter distance in feet and inches\n");
        scanf("%d%d",&feet,&inches);
    }
    void display()
    {
        cout<<feet<<"Feets and "<<inches<<"Inches"<<endl;
    }
    void add(distance1 d1,distance1 d2)
    {
        feet=0;
        inches=0;
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        feet=feet+inches/12;
        inches=inches%12;
    }

};
int main()
{
    int f,i;
    printf("Enter distance in feet and inches\n");
    scanf("%d%d",&f,&i);
    distance1 d1(f,i);
    distance1 d2;
    distance1 d3;
    d2.get();
    d3.add(d1,d2);
    cout<<"Result: ";
    d3.display();
}