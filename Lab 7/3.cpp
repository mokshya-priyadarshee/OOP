/*Write a program to overload unary (++) operator and unary (--) operator*/
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
    void operator--(int)//Notice a int in bracket as it is postfix unary operator overloading
    {
        x--;
        y--;
    }
    void operator++()
    {
        x++;
        y++;
    }
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
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
    w--;//Notice this is postfix operator overloading
    w.display();
}