#include<iostream>
using namespace std;
void value(int i,int n){
     if(i>n) return;
    cout<<i<<endl;
    value(i+1,n);
}
int main(){
    int n;
    cout<<"enter value :";
    cin>>n;
    value(1,n);
}
