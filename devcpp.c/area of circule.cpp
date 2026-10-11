#include<stdio.h>
int main(){
    int a;
    printf("print a 1st number:");
    scanf("%d",&a);
    int b;
    printf("print a 2nd number:");
    scanf("%d",&b);
    int c;
    printf("print a 3rd  number:");
    scanf("%d",&c);

    if (a>b&&a>c)
   {
    printf("%d is a gre. number",a);
    }
    else if( b>a&&b>c){
        printf("%d is a gre. number",b);
    }
    else(c>a&&c>b){
        printf("%d is a gre. number",c);
    }
    return 0;
}

