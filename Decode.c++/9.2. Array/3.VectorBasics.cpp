#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     v.push_back(6);
     v.push_back(5);
     v.push_back(9);
     v.push_back(8);

     // cout<<v[0]<<" ";
     // cout<<v[0]<<" ";  
     // cout<<v[0]<<" ";    ese print hoga bss niche thoda sa extra dimag hahahahah.com
     // cout<<v[0]<<" ";
         
     int n = v.size();
     for(int i=0; i<=n-1; i++){
          cout<<v[i]<<" ";
     }
     }
