#include<stdio.h>
int main(){
int n;
printf("ENTER A NUMBER:");
scanf("%d",&n);
for( int i=1; i<=n; i++){
 for(int i=1; i<=5; i++){
 printf("*");
 }
 printf("\n");
}

    return 0;
}