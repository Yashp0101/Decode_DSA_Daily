#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 int main(){
    cout<<"Enter your name :";
    string s;
    cin>>s;
    int max = 0;
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int count = 0;

        for(int j = 0; j<s.length(); j++){
            if(s[i]==s[j]){
                count ++;
            }
            if(max<count) max = count;
        }
    }
    cout<<max; 
 }
