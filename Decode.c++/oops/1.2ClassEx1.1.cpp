#include<iostream>
using namespace std;
class player{
    public://access specifier
    int score;//player score
    int health;//player health
};
int main(){
    player yash;
    yash.score=88;
    yash.health=55;
    cout<<yash.score<<endl;
    cout<<yash.health<<endl;

     player vishal;
    vishal.score=80;
    vishal.health=54;
    cout<<vishal.score<<endl;
    cout<<vishal.health<<endl;
}