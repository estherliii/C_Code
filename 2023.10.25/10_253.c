#include<stdio.h>
void main()
{
	int n,i;
	printf("please enter a number:");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+2){
		printf("%d ",i);
	}
}
