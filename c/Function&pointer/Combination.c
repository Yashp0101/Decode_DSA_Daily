#include<stdio.h>
int fact;
int factorial(int x){
int fact=1;
for (int i = 2; i <= x; i++)
{
    fact=fact*i;
}
return fact;
}
int main(){
    int n;
    printf("enter a number n :");
    scanf("%d",&n);
        int r;
    printf("enter a number r :");
    scanf("%d",&r);
    int nri=factorial(n)/(factorial(r)*factorial(n-r));
printf("%d",nri);
    return 0;
}