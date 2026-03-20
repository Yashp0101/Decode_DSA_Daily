#include<iostream>
#include<vector>
using namespace std;
void reversepart(int i,int j,vector<int>& v){
     while(i<=j){
int temp = v[i];
v[i]= v[j];
v[j]=temp;
i++;
j--;
     }
}
void display(vector<int>& a){
     for(int i = 0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
     int n;
     cout<<"enter array size:";
     cin>>n;
     vector<int>v(n);
     cout<<"enter array element:";
     for(int i=0; i<v.size(); i++){
          cin>>v[i];
     }
int k;
cout<<"number of element rotate:";
cin>>k;
if(k>n){
     k= k%n;
}
reversepart(0,n-k-1,v);
reversepart(n-k,n-1,v);
reversepart(0,n-1,v);
display(v);

}