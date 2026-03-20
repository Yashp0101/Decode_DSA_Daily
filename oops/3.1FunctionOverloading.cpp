#include<iostream>
using namespace std;
class test{
   public:
   void add(int a , int b){
    cout<<"add:"<<a+b<<endl;
   }
   void add( int c){
        cout<<c;
   }
};
int main(){

    test t;
    t.add(5,6);
    t.add(5,5);// ek he function se ham different parameter deke creat kara sakte hai.
    t.add(7);
}