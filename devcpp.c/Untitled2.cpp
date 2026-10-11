#include<stdio.h>
int main(){
	int num;
	printf("Enter year: ");
	scanf("%d",&num);
	if(num%2 == 0){
		printf("even");
	}
	else{
		printf("Not even");
	}
	return 0;
}
