#include<iostream>
using namespace std;

class custumer{
    public:
    string name;
    int age;
    int b_balence;
      
    custumer(string n , int a , int b){
        name = n;
        age = a;
        b_balence = b;
        cout<<"Perametrised Constructor called"<<endl;
    }

};
int main(){
    custumer yash( "vishal" , 19 , 200);
}