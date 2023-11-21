#include<stdio.h>
void main()
{
	int sum;
	int i;
	sum=0;
	printf("The first 5 number is:\n");
	for (i=1;i<=5;i++){
		printf("%d",i);
		sum+=i;
    }
	printf("\nThe Sum is:%d",sum);
		
}
 
