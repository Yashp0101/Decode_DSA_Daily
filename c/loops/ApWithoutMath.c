#include<stdio.h>
 int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);// ap 1 3 5 7 9 .....
    int a=1;// a se start ho rah hai 
    for (int i=1; i<=n; i++)
    {
        printf("%d \n",a);
            a=a+2;//a=a+d hogA
    }
    
    return 0;
 }