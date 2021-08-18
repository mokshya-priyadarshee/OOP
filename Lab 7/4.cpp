/*Write a program to overload unary (++) operator and unary (--) operator using friend function*/
#include<iostream>
using namespace std;
class xyz
{
    int x,y;
    public:
    xyz(int a,int b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
    friend void operator--(xyz &z);
    friend void operator++(xyz &z);
};
    void operator--(xyz &z)//Notice a int in bracket as it is postfix unary operator overloading
    {
        z.x--;
        z.y--;
    }
    void operator++(xyz &z)
    {
        z.x++;
        z.y++;
    }
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    xyz w(a,b);
    cout<<"After incrementing\n";
    ++w;
    w.display();
    cout<<"After decrementing\n";
    --w;//Notice this is postfix operator overloading
    w.display();
}//Cannot be made prefix for now ask as doubt...