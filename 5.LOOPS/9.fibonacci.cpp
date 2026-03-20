#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
   int i=1;
   int j=1;
   int fib;
   for(int k=3; k<=n; k++){
fib=i+j;
i=j;
j=fib;
   }
   cout<<j; 
   } 