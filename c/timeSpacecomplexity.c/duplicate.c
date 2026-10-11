#include<stdio.h>
int main(){
    int arr[]={6,1,2,3,2,5,4};
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i]==arr[j]){
                printf("Duplicate element is %d\n", arr[i]);
            }
        }
    }
    return 0;   
}