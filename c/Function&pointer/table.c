#include<stdio.h>
void printtable(int n);
int main(){
int n;
printf("enter a number:");
scanf("%d",&n);
printtable(n);//argument/actual perameter
return 0;
}
void printtable(int n){ //paramiter/formal peramiter 
     for( int i=0; i<=10; i++)
     
     printf("%d\n", n*i);
}