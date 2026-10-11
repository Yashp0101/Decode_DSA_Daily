#include<stdio.h>
int main(){
    int n,t;
     scanf("%d",&t);
    while(t--){
    printf("enter a number:\n");
    scanf("%d",&n);
    int a=0;
	int i; 
    for(i=2; i<n; i++){
        if (n%i==0)
        {
            a=1;
            break;
        } 
        
    }
    if (a==0)
    {
        printf("%d enter number is prime\n",n);
    }
    else {
    printf("%d number is composite\n",n);
    
}}
    return 0;
}