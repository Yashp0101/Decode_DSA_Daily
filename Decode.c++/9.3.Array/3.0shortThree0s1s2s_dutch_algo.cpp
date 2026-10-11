// #include<iostream>
// #include<vector>
// using namespace std;
// void shortoo(vector<int>& v){
//    int n = v.size();
//    int lo = 0;
//    int mid = 0;
//    int hi = n-1;
//    while (mid<=hi)
//    {
//      if(v[mid]==2){
//           int temp = v[mid];
//            v[mid] = v[hi];
//            v[hi] = temp;
//            hi--;
//      }
//      else if(v[mid]==0){
//            int temp = v[mid];
//            v[mid] = v[lo];
//            v[lo] = temp;
//            lo++;
//            mid++;
//      }

//      else mid++;
     
//    }
// }

// int main(){
//  vector<int>v;     //vector

// v.push_back(1);
// v.push_back(2);
// v.push_back(0);
// v.push_back(1);
// v.push_back(0);
// v.push_back(1);
// v.push_back(1);
// v.push_back(2);
//  for(int i=0; i<v.size(); i++){
//      cout<<v[i]<<" ";
//  }
//  cout<<endl;
//  shortoo(v);
//   for(int i=0; i<v.size(); i++){
//      cout<<v[i]<<" ";
//  }
// }






#include<iostream>
#include<vector>
using namespace std;
void sorto(vector<int>& v){
    int n = v.size();
    int lo = 0;
    int mid = 0;
    int hi = n-1;
    while(mid<=hi){
        if(v[mid]==2){
           int temp = v[mid];
           v[mid] = v[hi];
           v[hi] = temp;
           hi--;
        }
        else if(v[mid]==0){
            int temp = v[mid];
           v[mid] = v[lo];
           v[lo] = temp;
           lo++;
           mid++;
        }
        else mid++ ;  
    }
}

int main(){
 vector<int>v;     //vector
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(2);
 for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
    }
     cout<<endl;
     sorto(v);
      for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" ";
 }
}