#include<iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int Nop;
    int countBook(int p){
        if(price<p)
        return 1;
        else return 0;    
    }
    bool isBookPresent(string book){
        if(name == book ) return true;
        else return false;
    }
};
int main(){
book ramayan;
 ramayan.name= "math";
 ramayan.price= 300;
 ramayan.Nop = 200;

 //cout<<ramayan.countBook(350);
cout<<ramayan.isBookPresent("math");
}