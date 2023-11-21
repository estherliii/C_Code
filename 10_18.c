#include <stdio.h>
void main()
{
	char gender;
	int age;
	
	printf("Gender M/F:");
	scanf("%c",&gender);
	printf("Age:");
	scanf("%d",&age);
	
	if(gender=='f'|| gender=='F'){
		if(age>=18){
			printf("you are eligible to work.");
		}
		else{
			printf("focus on your study.");
		}
	}
	else if(gender=='m'|| gender=='M'){
		if(age>=20){
			printf("good luck for your career.");
		}
		else{
			printf("take care of yourself.");
		}
		
	}
	else{
		printf("error");
	}
}
	
	
	
	

