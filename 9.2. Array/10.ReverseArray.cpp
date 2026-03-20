#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& a){
     for(int i = 0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
     int x;
     cout<<"enter vecter size";
     cin>>x;
     vector<int>v(x);
     cout<<"enter array element:";
     for(int i = 0; i<v.size(); i++){
          cin>>v[i];
     }
     display(v);

     // int i =0;
     // int j = v.size()-1;
     // while(i<=j){
     //      int temp = v[i];
     //      v[i] = v[j];
     //      v[j]=temp;
     //      i++;
     //      j--;
     // }

     for(int i =0,j=v.size() - 1; i<=j; i++,j--){
           int temp = v[i];
          v[i] = v[j];
          v[j]=temp;
     }
     display(v);
}