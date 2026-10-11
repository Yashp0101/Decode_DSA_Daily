#include<stdio.h>
int main(){
    int n;
    printf("enter row:");
    scanf("%d",&n);
    char ch='A';
    int i;
    for( i; i<=n; i++){
    	int j;
   for( i; j<=n; j++){
      printf("%c",ch);
      ch++;
   }
printf("\n");

    }

    return 0;
}
