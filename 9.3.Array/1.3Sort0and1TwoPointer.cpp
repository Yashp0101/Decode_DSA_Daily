#include<iostream>
#include<vector>
using namespace std;
void shortoo(vector<int>& v){
   int n = v.size();
   int i=0;
   int j=n-1;
   while(i<j){
     if(v[j]==1) j--;
     if(v[i]==0) i++;
     if(i>j) break;
     if(v[i]==1 && v[j]==0){
          int temp = v[i];
          v[i]=v[j];
          v[j]=temp;
          i++;
          j--;
     }
   }
}
int main(){
 vector<int>v;     //vector
//  v.push_back(0);
//  v.push_back(1);
//  v.push_back(0);
//  v.push_back(1);
//  v.push_back(1);
//  v.push_back(1);
//  v.push_back(0);
//  v.push_back(1);
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
 for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
 }
 cout<<endl;
 shortoo(v);
  for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
 }
}