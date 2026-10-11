#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a; //pointer to integer
    int** y = &x; //pointer to pointer to integer
    printf("%d\n", a); //value of a
    printf("%d\n", *x); //value at address stored in pointer (value of a)
    printf("%d\n", **y); //value at address stored in pointer to pointer (value of a)
    return 0;
}