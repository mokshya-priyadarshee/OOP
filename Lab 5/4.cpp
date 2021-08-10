/*Create a class called 'TIME' that has three integer data members for hours, minutes and
seconds, a constructor to initialize the object to some constant value, member function to
add two TIME objects, member function to display time in HH:MM:SS format. Write a main
function to create two TIME objects, add them and display the result in HH:MM:SS format*/
#include<iostream>
using namespace std;
class TIME
{
    int h,m,s;
    public:
    TIME(int hh,int mm,int ss)
    {
        h=hh;
        m=mm;
        s=ss;
    }
    void add(TIME t1,TIME t2)
    {
        s=t1.s+t2.s;
        m=s/60;
        s=s%60;
        m=m+t1.m+t2.m;
        h=m/60;
        m=m%60;
        h=h+t1.h+t2.h;
    }
    void display()
    {
        cout<<h<<"::"<<m<<"::"<<s;
    }
};
int main()
{
    cout<<"Enter first time"<<endl;
    int h,m,s;
    cin>>h>>m>>s;
    TIME t1(h,m,s);
    cout<<"Enter Second time\n";
    cin>>h>>m>>s;
    TIME t2(h,m,s);
    TIME t3(0,0,0);
    cout<<"First Time: ";
    t1.display();
    cout<<"\nSecond Time: ";
    t2.display();
    cout<<endl;
    t3.add(t1,t2);
    printf("Result after addition:\n");
    t3.display();
}