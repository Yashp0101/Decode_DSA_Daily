#include<iostream>
#include<vector>
using namespace std;
int main(){
     int n;
     cout<<"enter array size:";
     cin>>n;
     for(int i = 1; i<=n; i++){
          for(int j = 1; j<=n-i; j++){
               cout<<" ";
          }
          for(int k = 1; k<=2*i-1; k++){
               cout<<"*";
          }
          cout<<endl;
     }
     int p=n-1;
     for(int i = 1; i<=p; i++){
          for(int j = 1; j<=i; j++){
               cout<<" ";
          }
          for(int k = (p+2)*(2-2*p); k>=1; k--){
               cout<<"*";
          }
          cout<<endl;
     }
}