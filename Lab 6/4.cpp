/*(Multipath Inheritance) Design a base class called Student with two fields:- (i) Name (ii) roll
number. Derive two classes called Sports and Exam from the Student base class. Class Sports
has a field called s_grade and class Exam has a field called e_grade which are integer fields.
Derive a class called Results which inherit from Sports and Exam. This class has a character
array or string field to represent the final result. Also it has a member function called display
which can be used to display the final result. Illustrate the usage of these classes in main.*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    protected:
    char name[50];
    int roll;
    public:
    Student()
    {
    }
    Student(char *s,int r)
    {
        strcpy(name,s);
        roll=r;
    }
};
class Sports:virtual public Student
{
    protected:
    int s_grade;
 /*   public:
    Sports()
    {}
    Sports(int *s,int r,int g):Student(s,r)
    {
        s_grade=g;
    }*/
};
class Exam:public virtual Student
{
    protected:
    int e_grade;
    /*public:
    Exam(int *s,int r,int g):Student(s,r)
    {
        e_grade=g;
    }*/
};
class Result:public Sports,public Exam
{
    protected:
    char r[50];
    public:
    Result(char *s,int rol,int sg,int eg,char *re)
    {
        strcpy(name,s);
        strcpy(r,re);
        roll=rol;
        s_grade=sg;
        e_grade=eg;
    }
    void display()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Roll :"<<roll<<endl;
        cout<<"Sports Grade :"<<s_grade<<endl;
        cout<<"Education Grade :"<<e_grade<<endl;
        cout<<"Result :"<<r<<endl;
    }
};
int main()
{
    char n[50],res[50];
    int s,e,r;
    cout<<"Enter Name"<<endl;
    cin.getline(n,50);
    cout<<"Enter Roll Number\n"<<endl;
    cin>>r;
    cout<<"Enter s grade"<<endl;
    cin>>s;
    cout<<"Enter e grade"<<endl;
    cin>>e;
    cout<<"Enter Result\n";
    cin>>res;
    Result z(n,r,s,e,res);
    z.display();
};