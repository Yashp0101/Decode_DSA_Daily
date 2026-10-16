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

        for(int j = i+1; j<=s.length(); j++){
            if(s[i]==s[j]){
                count ++;
            }
            if(max<count) max = count;
        }       
    }
    cout<<max; 

// max aa raha hai but kya aa raha hai pta karne ke liye.
for(int i = i+1; i<=s.length(); i++){
    char ch = s[i];
    int count = 1;
    for(int j = 0; j<s.length(); j++){
        if(s[i]==s[j]) count++;                   
    }
    if(count = max){
        cout<<ch<<" "<<max<<endl;
    }
}
  
 }
