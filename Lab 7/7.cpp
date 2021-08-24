/*Implement a class String containing the following functions:
- Overload + operator to carry out concatenation of strings.
- Overload = operator to carry out string copy.
- Overload =+ operator to carry out the comparison of strings.
- Function to display the length of a string*/
#include<iostream>
#include<string.h>
using namespace std;
class Stringoper
{
    char *c;
    int n;
    public:
    Stringoper(int m)
    {
        c=new char[n];
        n=m;
    }
    void get()
    {
        cout<<"Enter the string\n";
        gets(c);
    }
    void operator+(Stringoper b)
    {
        strcat(c,b.c);
    }
    void operator=(Stringoper b)
    {
        strcpy(c,b.c);
    }
    void operator+=(Stringoper b)
    {
        int r=strcmp(c,b.c);
        if(r==0)
        {
            cout<<"Strings are Equal\n";
        }
        else
        cout<<"Strings are not equal\n";
    }
    void display()
    {
        cout<<c;
    }
};
int main()
{
    Stringoper s1(10),s2(10),s3(10);
    s1.get();
    s2.get();
    cout<<"\nString 1:";
    s1.display();
    cout<<"\nString 2:";
    s2.display();
    cout<<"\nAfter merging String 1 and 2 we get String 1:";
    s1+s2;
    s1.display();
    cout<<"\nAfter Copying String 1 to 3 we get String 3:";
    s3=s1;
    s3.display();
    cout<<"\nComparing String 1 and 3 we get that ";
    s3+=s1;
}