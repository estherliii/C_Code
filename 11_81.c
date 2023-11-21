#include<stdio.h>
#define square(x) (x)*(x)
void main(){
	float a;
	printf("Input any number for square:");
	scanf("%f",&a);
	printf("\nThe square of %f is: %f",a,square(a));
	
} 
