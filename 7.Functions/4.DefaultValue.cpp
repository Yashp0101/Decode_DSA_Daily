// #include<iostream>
// using namespace std;
// void fact(int x=4, int y=6){
//  cout<<x<<" "<<y;              // output 4 and 6 jo default value hai
// }
// int main(){
//     fact();
// }

#include<iostream>
using namespace std;
void fact(int x=4, int y=6){
 cout<<x<<" "<<y;          // output:- 4 and 6 jo default value hai isliye print to
}                           // 2 3 he hoga.
int main(){
    fact(2,3);
}