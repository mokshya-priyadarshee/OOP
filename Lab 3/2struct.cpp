/*Write a program to enter the code, name and price of items. The user must feed the quantity in
which he wants a product. The program must calculate and display the final bill of 10 items.
In the following format.*/
#include <iostream>
using namespace std;
struct item
{
	char code[10];
	char name[10];
	int qty;
	int price;
	int total;
};
int main()
{
	struct item i[10];
	int j;
	char *b;
	cout<<"Enter the details of the items\n";
	for(j=0;j<3;j++)
	{
		cout<<"Enter the code"<<"\n";
		gets(i[j].code);
		cout<<"Enter the name "<<"\n";
		gets(i[j].name);
		cout<<"Enter the price"<<"\n";
		cin>>i[j].price;
		cin.ignore(1,'\n');
	}
	for(j=0;j<3;j++)
	{
		cout<<"Enter the quantity for ";
		puts(i[j].name);
		i[j].total=i[j].qty*i[j].price;
	}
	cout<<"Sl. No.\t Code \tName \tPrice\t Quantity \tTotal\n";
	cout<<"-------------------------------------------------------------------------------------------\n";
	for(j=0;j<3;j++)
	{
		cout<<i[j].code<<"\t"<<i[j].name<<"\t"<<i[j].price<<"\t"<<i[j].qty<<"\t"<<i[j].total<<endl;
	}
	cout<<"-------------------------------------------------------------------------------------------\n";
}
