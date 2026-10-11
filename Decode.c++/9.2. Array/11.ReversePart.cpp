#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
     for(int i = 0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
void reverse(vector<int>& v){  
     int i =0;
     int j = v.size()-1;
     while(i<=j){
          int temp = v[i];
          v[i] = v[j];
          v[j]=temp;
          i++;
          j--;
     }
}
void reversepart(int i, int j,vector<int>& v){  
     while(i<=j){
          int temp = v[i];
          v[i] = v[j];
          v[j]=temp;
          i++;
          j--;
     }
}
int main(){
     int x;
     cout<<"enter vecter size:";
     cin>>x;
     vector<int>v(x);
     cout<<"enter array element:";
     for(int i = 0; i<v.size(); i++){
          cin>>v[i];
     }
     display(v);
     reverse(v);
     display(v);
     reversepart(1,3,v);    
     display(v);   
  
}