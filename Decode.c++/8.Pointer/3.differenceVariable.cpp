#include<iostream>
using namespace std;
int main(){
     int x = 122;
     int* p = &x;
     cout<<*p<<endl;//x ka address pe jo value hai vo print hogi 
     *p = 6;
     cout<<x;
}