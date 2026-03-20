#include<iostream>
using namespace std;
void display(int a[]){
     for(int i = 0; i<=4; i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
 return;    
}
void change(int b[]){
     b[0] = 15;
}

int main(){
     int arr[] = {5,4,8,7,2};
     display(arr);
     change(arr);
     display(arr);
}