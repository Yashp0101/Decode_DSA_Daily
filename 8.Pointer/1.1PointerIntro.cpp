#include<iostream>
using namespace std;
int main(){
     int x=4;
     int* p = &x;

     cout<<&x<<endl;//x ka address
     cout<<p<<endl;//same x ka address print hoga
     cout<<&p<<endl; // ab isme p ka address pring hoga jo x se alag hoga
     cout<<*p; //isme x ke address ke value print karega

}