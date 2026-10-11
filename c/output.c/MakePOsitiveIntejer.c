#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if( n < 0){ //if n is a nagative
        n=n*(-1);
    }
    printf("the value is:%d",n);
    return 0;
}