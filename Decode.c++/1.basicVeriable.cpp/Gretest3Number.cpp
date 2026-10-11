#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    if(x>=y && x>=z){
        cout<<x<<" is the greatest number";
    }
    else if(y>=z){
        cout<<y<<" is the greatest number";
    }
    else{
        cout<<z<<" is the greatest number";
    }
    return 0;
}
