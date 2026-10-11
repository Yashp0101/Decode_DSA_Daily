#include<iostream>
using namespace std;
void value(int n){
    if(n == 0) return;//base case
    value(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter value :";
    cin>>n; 
    value(n);
}
