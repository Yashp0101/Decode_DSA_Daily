#include<stdio.h>
int main(){
    int n;
   printf("enter number:");
    scanf("%d",&n);
int p=1;
    for(int i=2; i<=n; i++){
      p=p*i;
    }
        printf("%d\n ", p);
    return 0;
}