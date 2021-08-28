/*(Pointers to objects) Define a class Item that is used to store and display the information
regarding the item number and its price. Write a program to store and display the details of
one items by using both normal object and pointer to object separately. Display appropriate
message wherever necessary.*/

#include<iostream>
using namespace std;
class item
{
    int itemno;
    int price;
    public:
    void get()
    {
        cout<<"Enter Item Number\n";
        cin>>itemno;
        cout<<"Enter the price\n";
        cin>>price;
    }
    void display()
    {
        cout<<"Item Number:"<<itemno<<endl;
        cout<<"Price:"<<price<<endl;
    }
};
int main()
{
    item i,*it;
    cout<<"Using Normal Object\n";
    i.get();
    i.display();
    it=&i;
    cout<<"Using Pointer object\n";
    it->get();
    it->display();
}
