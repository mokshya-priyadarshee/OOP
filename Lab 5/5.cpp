/*Write a program using copy constructor to copy data of an object to another object*/
#include<iostream>
using namespace std;
class copyc
{
    int z;
    public:
    copyc(int a)
    {
        z=a;
    }
    copyc(const copyc &c)
    {
        z=c.z;
    }
    void display()
    {
        cout<<z<<endl;
    }
};
int main()
{
    cout<<"Enter data for first object\n";
    int n;
    scanf("%d",&n);
    copyc c1(n);
    cout<<"Data of first objects are :";
    c1.display();
    copyc c2(c1);
    cout<<"Details of second object are:";
    c2.display();
}