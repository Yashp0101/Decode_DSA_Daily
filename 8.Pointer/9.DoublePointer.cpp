#include<iostream>
using namespace std;
int main(){
     int n=9;
  int* ptr = &n;
  int** ptr2 = &ptr;
  cout<<ptr<<endl<<ptr2;
}