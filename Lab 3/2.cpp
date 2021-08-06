/*Write a program to enter the code, name and price of items. The user must feed the quantity in
which he wants a product. The program must calculate and display the final bill of 10 items.
In the following format.*/
#include<iostream>
using namespace std;
int t=0;
class item
{
	char code[10];
	char name[10];
	int price;
	int qty;
	int total;
	public:
		int j;
		void get()
		{
			cout<<"Enter the code"<<"\n";
			gets(code);
			cout<<"Enter the name "<<"\n";
			gets(name);
			cout<<"Enter the price"<<"\n";
			cin>>price;
			cin.ignore(1,'\n');
		}
		void quantity()
		{
			cout<<"Enter the quantity for ";
			cout<<name<<endl;
			cin>>qty;
			total=qty*price;
			t=t+total;
			
		}
		void display()
		{
			cout<<code<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<"\t"<<total<<endl;
		}
};
int main()
{
	item i[10];
	int j;
	cout<<"Enter details\n";
	for(j=0;j<10;j++)
	i[j].get();
	for(j=0;j<10;j++)
	i[j].quantity();
	for(j=0;j<10;j++)
	i[j].display();
}
