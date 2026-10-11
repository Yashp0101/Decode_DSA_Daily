#include<iostream>
using namespace std;
void fun(int x){
    if(x==0) return;
    cout<<"Good Morning ji"<<endl;
    fun(x-1);
}
    int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    fun(n);
}
