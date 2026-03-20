#include<iostream>
#include<vector>
using namespace std;
void shortoo(vector<int>& v){
   int n = v.size();
     int j = 0 ;
     for(int i = 0; i<n; i++){
          if(v[i] == 0){
               v[j]=0;
               j++;
          } 
              
     }
     while(j<n){
          v[j]=1;
          j++;
     }
    
       for(int i = 0; i<n; i++){
         cout<<v[i]<<" ";
     }
}
int main(){
 vector<int>v;     //vector
 v.push_back(0);
 v.push_back(1);
 v.push_back(0);
 v.push_back(0);
 v.push_back(1);
 v.push_back(1);
 v.push_back(0);
 v.push_back(1);
 shortoo(v);
}