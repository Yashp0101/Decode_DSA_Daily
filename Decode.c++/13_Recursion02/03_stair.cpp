#include<iostream>
using namespace std;

int stsir(int n){
    if(n ==1) return 1;
    if(n==2) return 2;
    int res = stsir(n-1)+ stsir(n-2);
    return res;
}
    int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<stsir(n);
    }
