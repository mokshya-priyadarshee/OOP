/*Write a program to demonstrate the use of scope resolution operator(::) by declaring same
varibale name globally and locally and display the value of gloabl and local variables.*/
#include <iostream>
using namespace std;
int i=2;
int main()
{
	int i=10;
	cout<<"The value of global variable i:"<<::i<<endl;
	cout<<"The value of local variable i: "<<i<<endl;
	
}

