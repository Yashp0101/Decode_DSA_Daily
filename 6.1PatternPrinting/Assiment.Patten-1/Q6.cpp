#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter a rows m:";
    cin>>m;
     cout<<"enter a coulam n:";
    cin>>n;
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(i==1||i==4||j==1||j==6)  cout<<"*";
        else cout<<" ";
        }
        cout<<endl;
    }
}