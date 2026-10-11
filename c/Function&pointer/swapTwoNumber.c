#include<stdio.h>
int main(){
    int a,b;
    printf("enter number a and b:");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the vail of a is: %d\n",a);
    printf("the vail of b is: %d\n",b);
    return 0;
}