/*Write a program to create a class player having data members as player number, name, score.
Now enter details of player by overloading extraction operator (>>) and display all the details
by overloading insertion operator (<<).*/
#include<iostream>
#include<string.h>
using namespace std;
class player
{
    char name[10];
    int playerno;
    int score;
    friend void operator>>(istream &in,player &p);
    friend void operator<<(ostream &out,player &p);
};
void operator>>(istream &in,player &p)
{    
    in>>p.name;
    in>>p.playerno;
    in>>p.score;
    cout<<endl;
}
void operator<<(ostream &out, player &p)
{
    cout<<"Player Name: ";
    out<<p.name;
    cout<<"\nPlayer Number: ";
    out<<p.playerno;
    cout<<"\nPlayer score: ";
    out<<p.score;
}
int main()
{
    printf("Enter name, player no and score of the player\n");
    player p;
    cin>>p;
    cout<<"Details of the player\n";
    cout<<p;
}