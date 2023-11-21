#include<stdio.h>
void main()
{
	int i,n=10;
	float num,sum=0.00;
	
	printf("Please enter 10 numbers:");
	for (i=1;i<=n;i++){
		scanf("%f",&num);
		sum=sum+num;
	} 
	printf("sum=%.2f\n",sum);
	printf("average=%.2f",sum/n);
}
