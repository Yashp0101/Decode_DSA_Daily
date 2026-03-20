#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"enter n:";
     cin>>n;
     for(int i=0; i<=n; i++){
          for(int j = 0; j<=n-i+1; j++){//ye space ke liye hai bss
               cout<<" ";
          }
          int curr=1;
          for(int j = 0; j<=i; j++){
               cout<<curr<<" ";
               curr=curr*(i-j)/(j+1);
          }
          cout<<endl;
     }
}