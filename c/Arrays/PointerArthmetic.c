#include<stdio.h>
int main(){
int age =23;
int *ptr=&age;
printf("the address of age is %u\n",ptr);
ptr++;
printf("the address of age is %u\n",ptr);
    return 0;
}