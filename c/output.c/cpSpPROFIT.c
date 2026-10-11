#include<stdio.h>
int main(){
    int cp;
    printf("inter cost price:");
    scanf("%d",&cp);
    int sp;
    printf("inter selling price:");
    scanf("%d",&sp);
    if(cp>sp){
        printf("it is a loss:");
    }
    else{
        printf("is is a profit");
    }

    return 0;
}