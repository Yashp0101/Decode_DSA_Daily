#include<iostream>
using namespace std;

class player{
private:
int health;
int age;
int score;
int alive;
//getter and setter functions
public:
int getHealth(){
    return health;
}
int getAge(){
    return age;
}
int getScore(){
    return score;
}
int getIsAlive(){
    return alive;
}

void setHealth(int health){
    this->health= health;
}
void setAge(int age){
    this->age=age;
}
void setScore(int score){
    this->score=score;
}
void setIsAlive(bool alive){
    this->alive=alive;
}
};
int getScore(player a , player b){//function to get combined score of two players
    return a.getScore()+ b.getScore();//accessing score using getter function
}
player MaxScore(player a , player b){
    if(a.getScore()>b.getScore())
    return a;
    else 
    return b;
}
//main function
int main(){
    player yash;
    player vishal;
        yash.setHealth(45);
        yash.setAge(20);
        yash.setScore(80);
        yash.setIsAlive(true);

        vishal.setHealth(40);
        vishal.setAge(18);
        vishal.setScore(60);
        vishal.setIsAlive(true);

        cout<<getScore(yash,vishal);//function call
        cout<<endl;

        
        //cout<<MaxScore(yash,vishal).getScore(); ye shi hai and neeche wala bhi shi hai
        player maxPlayer= MaxScore(yash,vishal);
        cout<<maxPlayer.getScore();


        player *urvi = new player;//dynamically allocated object
        cout<<endl;
        urvi->setHealth(50);//accessing member function using pointer
        cout<<urvi->getHealth();//accessing member function using pointer
                               //delete urvi;//deallocating memory
}