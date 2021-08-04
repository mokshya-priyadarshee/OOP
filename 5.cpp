/*Write a program to find the summation of three numbers by using one function only with
function name SUM having three arguments. If at run time one argumnet is given to the
function SUM, then second and third argument will be assumed by default as 10 and 20
respectively. If two argumnets are given at run time, then thrird argument will be assumed as 20.
Use function with default argument concepts.*/
#include <iostream>
using namespace std;
void SUM(int,int =10,int =20);
int main()
{
	int a,b,c;
	cout<<"Enter one argument for summation function"<<endl;
	cin>>a;
	SUM(a);
	cout<<"Enter two argument for summation function"<<endl;
	cin>>a>>b;
	SUM(a,b);
	cout<<"Enter three argument for summation function"<<endl;
	cin>>a>>b>>c;
	SUM(a,b,c);
}
void SUM(int i,int j,int k)
{
	int s=i+j+k;
	cout<<"The sum of the numbers is "<<s<<endl;
}
