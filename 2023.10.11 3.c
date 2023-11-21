#include<stdio.h>
int main(void)
{
	float i;
	float c;
	printf("Income:");
	scanf("%f",&i);
	printf("Cost:");
	scanf("%f",&c);
	if(i>=c) printf("Profit:%f\n",i-c);
	else{
		printf("Loss:%f",c-i);
	}
}



