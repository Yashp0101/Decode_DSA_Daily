#include<iostream>
using namespace std;

int maze(int sr,int sc,int er,int ec){

    if(sr>er || sc>ec) return 0;
    if(sr==er && sc == ec) return 1;

    int rightside = maze(sr,sc+1,er,ec);
    int downside = maze(sr+1,sc,er,ec);
    int totalway = rightside + downside;

    return totalway;
   }
void printpath(int sr,int sc,int er,int ec,string s){
     
    if(sr>er || sc>ec) return;
    if(sr==er && sc == ec){
        cout<<s<<endl;
        return;
    }
    printpath(sr,sc+1,er,ec,s+"R");
    printpath(sr+1,sc,er,ec,s+"D");
}

int maze2(int row,int col){// two paramer se kiya
    if(row<1 || col<1) return 0;
    if(col ==1 && row == 1) return 1;

    int rightside = maze2(row,col-1);
    int downside = maze2(row-1,col);
    int totalway = rightside + downside;

    return totalway;
}
void printpath2(int row,int col,string s){ //two perameter se path likha

    if(row<1|| col<1) return;
    if(col == 1 && row == 1){
        cout<<s<<endl;
        return;
}
    printpath2(row ,col-1,s+"R");
    printpath2(row-1,col,s+"D");
}
    int main(){
       cout<< maze(1,1,3,3);
      // printpath(1,1,3,3,"");
       //cout<<maze2(3,3);
     //  printpath2(3,3, "");
    }
