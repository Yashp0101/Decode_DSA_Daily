#include<iostream>
#include<vector>
using namespace std;
void dispaly(vector<int>& a){
     for(int i = 0; i<a.size(); i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
     int n;
     cout<<"enter array size :";
     cin>>n;
     vector<int>v(n);
     for(int i = 0; i<v.size(); i++){
          cin>>v[i];
     }

     vector<int>v2(v.size());
     for(int i = 0; i<v.size(); i++){
          v2[i] = v[v.size()-1-i];
     }
     dispaly(v2);
}
