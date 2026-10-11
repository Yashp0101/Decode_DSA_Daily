#include<iostream>
using namespace std;

int stsir(int n){
    if(n ==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int res = stsir(n-1)+ stsir(n-2)+stsir(n-3);
    return res;
}
    int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<stsir(n);
    }


// #include <bits/stdc++.h>
// using namespace std;
// int findNumberOfWays(int n) {
// if(n < 0) return 0;
// if(n == 0)return 1;
// return findNumberOfWays(n-1) + findNumberOfWays(n-2) + findNumberOfWays(n-3);
// }
// int main() {   
//     int n;
//     cin >> n;
//     cout << findNumberOfWays(n) << endl;
// return 0;
// }
