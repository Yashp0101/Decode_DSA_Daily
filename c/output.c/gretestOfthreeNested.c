#include<stdio.h>
int main(){
    int a,b,c;
    printf("print a 1st number:");
    scanf("%d",&a);
    printf("print a 2nd number:");
    scanf("%d",&b);
    printf("print a 3rd  number:");
    scanf("%d",&c);

//     if (a>b&&a>c)
//    {
//     printf("%d is a gre. number",a);
//     }
//     else if( b>a&&b>c){
//         printf("%d is a gre. number",b);
    if(a>b){
        if(a>c){
        printf("%d is a gre.",a);}
        else{
        printf("%d is gre.",c);}
    }
    else{
        if(c>b)
        printf("%d is a gre. number",c);
        else
        printf("%d is gre. number",b);
    }
    return 0;
}