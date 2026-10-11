#include<stdio.h>
 int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);// ap 100 97  94 ..........
    int a=100;
	int i;// a se start ho rah hai 
    for (i=1; i<=n; i++)
    { if(a>=0)
        printf("%d \n",a);  
            a=a-3;//a=a+d hogA
    }
    
    return 0;
 }
