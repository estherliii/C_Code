#include<stdio.h>
void main()
{
	char name[30];
	int num;
	char menu1[30];
	float price1;
	char menu2[30];
	float price2;
	
	printf("Welcome to KFC Traditional Restaurant\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("Customer name:");
	gets(name);
	
	printf("Phone number:");
	scanf("%d",&num);
	
	printf("Enter Menu 1:");
	getchar();
	gets(menu1);
	

	printf("Price:");
	scanf( "%f", &price1 );

    printf("Enter Menu 2:");
	getchar();
	gets(menu2);

	printf("Price:");
	scanf("%f",&price2);
	getchar();
	
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("Customer:");
	puts(name);
	printf("Phone number:");
	printf("%d\n",num);
	printf("Your menu:\n====================================\n");
	puts(menu1);
	printf("\n            *********");
	printf("RM %f",price1);
	printf("\n");
	puts(menu2);
	printf("\n            *********");
	printf("RM %f",price2);	
	printf("\n====================================\n");
	printf("Total:%f",price1+price2);
 
}
