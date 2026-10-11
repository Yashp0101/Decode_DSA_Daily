#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v;
     v.push_back(5);
     v.push_back(8);
     v.push_back(11);
     v.push_back(15);
     v.push_back(8);
     int x =8;
     int idx=-1;
    for(size_t i = 0; i<v.size(); i++){//size_t and int same kaam karte hai but int me error aa jata hai
        if( v[i]==x) idx = i;
    }
    cout<<idx;
}