#include <stdio.h>
void main()
{
	char grade;
	printf("what is your grade:");
	scanf("%c",&grade);
		switch(grade){
			case 'A':
				printf("excellent!");
				break;
			case 'B':
				printf("well done!");
				break;
			default:
				printf("invalid grade");
				break;
		}
}
