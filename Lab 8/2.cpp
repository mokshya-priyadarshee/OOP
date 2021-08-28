/*Modify the program LE8.1 by creating an array of n objects using pointers. Show the details of
n items by using pointers to object concept.*/
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
        cout<<"Item Number:"<<itemno<<"  ";
        cout<<"Price:"<<price<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter value of n\n";
    cin>>n;
    item *it[n];
    for(int i=1;i<=n;i++)
    {
        it[i]=new item;
        it[i]->get();
    }
    cout<<"Details of the objects are\n";
    for(int i=1;i<=n;i++) 
    it[i]->display();
       
}