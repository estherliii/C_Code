#include<stdio.h>
void main(){
	int n,i;
	printf("Give one number to view multiplication table:");
	scanf("%d",&n);
	printf("Multiplication %d",n);
	printf("\n==========\n");
	for (i=1;i<=10;i++){
		printf("%d ¡Á%d = %d\n",i,n,n*i);
	}
	
}
