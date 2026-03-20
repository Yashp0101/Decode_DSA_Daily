#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter number a:";
    cin>>a;
cout<<"enter number b:";
    cin>>b;
    int c=a/b;
    int reminder =a-b*c;
    cout<<"reminder is:"<<reminder;
}