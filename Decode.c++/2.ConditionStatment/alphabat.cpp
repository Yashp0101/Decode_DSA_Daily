#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    int ascii = (int)ch;
    
   //a to z 97-112
   // A to Z 65-90
   if(ascii>=97 && ascii<=112 || ascii>=65 && ascii <= 90){
    cout<<"the enter value is character: "<<ch<<"  and int value is:"<<ascii;
   }
   else{
    cout<<"enter a number is not character:";
   }
}