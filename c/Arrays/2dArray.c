#include<stdio.h>
int main(){
    int mat[3][3];
    printf("enter 9 value:");
    for(int i = 0; i<=2; i++){
        for( int j = 0; j<=2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("the matrix is: \n");
    for(int i = 0; i<=2; i++){
        for( int j = 0; j<=2; j++){
        printf("%d  ",mat[i][j]);    
        }
        printf("\n");
    }
    
    return 0;
}