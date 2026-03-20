#include<iostream>
using namespace std;
int main(){
     int arr[] = {3,5,6,7,9};
     int* ptr = arr;
     ptr[0] = 15;
     for(int i = 0; i<=4; i++){
          cout<<ptr[i]<<" ";
     }
}