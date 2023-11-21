#include<stdio.h>
void welcome();
float input();
float result();


int main(){
	
	welcome();
	input();
	result();
	return 0;
	
}

void welcome() {
	printf("Hi! Welcome to Cube Calculator\n\tProgram.\n\n");
	printf("******************************");
}
void input(){
	printf("\n\n\n    Input any number:");
	scanf("%f",&a);
}
void result() {
	printf("\n\n    Cube of %.2f = %.2f",a,a*a*a);
}
