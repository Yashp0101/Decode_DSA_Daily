#include<stdio.h>
int main(){
    int target = 8;
    int arr[] = {1,2,3,4,5,8,9,12};
    for(int i=0; i<=7; i++){
        for(int j=i+1; j<=7; j++){
            if(arr[i]+arr[j]==target){
                printf("%d, %d is add of target = %d",arr[i],arr[j], target);
            }
        }
    }
    return 0;
}