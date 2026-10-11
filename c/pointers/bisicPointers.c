#include<stdio.h>
int main(){
int a=5;
int* x=&a;
printf("%p\n",x); //address stored in pointer(address of a)
printf("%p\n",&x); //address of pointer(x ka address)
printf("%d\n",*x);//value at address stored in pointer(value of a)
    return 0;
}