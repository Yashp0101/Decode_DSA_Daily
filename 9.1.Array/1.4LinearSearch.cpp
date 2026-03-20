#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter size of array:";
     cin>>n;
     int arr[n];
     for(int i=0; i<=n-1; i++){
          cin>>arr[i];
     }
     //jo chahiye input lo
     int x; 
     cout<<" Enter the element you want: ";
     cin>>x;
     bool flag=false;
     for(int i=0; i<=n-1; i++){
          if(arr[i]==x) flag = true;
     }
     if(flag==true) cout<<"element found";
     
     else cout<<"404 error element not fornd";
}