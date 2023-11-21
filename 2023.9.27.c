#include<stdio.h>
int main(void)
{
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n    BMI Calculator\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	char x[1];
	int y;
	int z;
	float w;
	
	printf("Name:");
	scanf("%s", x);
	printf("Year of birth:");
	scanf("%d", &y);
	printf("Weight in kg:");
	scanf("%d", &z);
	printf("Height in m:");
	scanf("%f", &w);
	
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n    BMI of ");
	printf("%s\n",x);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Name:%s\n",x);
	
	int a;
	a=2023-y;
	printf("Age:%d\n",a);
	float b;
	float bmi;
	bmi=z/(w*w);
	printf("BMI:%f\n",bmi);
	
	printf("BMI status: ");
	if(bmi<19) printf("underweight");
	else{
		if(bmi>=19&&bmi<=28) printf("normal");
		else{
			printf("overweight");
		}
	}
	
}
