#include<iostream>
using namespace std;

int oddSum(int fir,int last){
    if(fir>last) return 0;
    if(fir%2==0){ 
    return oddSum(fir+1,last);
   }
    return fir + oddSum(fir+2,last);
}
     
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<oddSum(a,b);
} 
