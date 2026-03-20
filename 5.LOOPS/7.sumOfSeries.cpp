#include<iostream>
using namespace std;/// 1-2+3-4+5-6+7-8+9........
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
int sum;
if(n%2==0)sum = -n/2;
else  sum=(-n/2)+n;
cout<<sum;
}