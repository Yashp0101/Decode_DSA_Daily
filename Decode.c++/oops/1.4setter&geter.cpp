#include<iostream>
using namespace std;
class player{
 private:
 int score;
 int health;

 public:  
  //setter  
 void setscore(int s){
    score = s;
 }
void sethealth(int h){
    health = h;
 }
 //geter
 int getscore(){
    return score;
 }
 int gethealth(){
    return health;
 }
};

int main(){
   
    player yash;

    yash.setscore(68);
    yash.sethealth(77);
    cout<<yash.getscore()<<endl;
    cout<<yash.gethealth();
}