#include<stdio.h>
int main(){
int arr[]={10,50,70,4,8};
int  max=arr[0];
for(int i = 1; i<=4; i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
printf("in large number: = %d ",max);

    return 0;
}