#include<stdio.h>
void main(){
	int num=0;
	int number=0;
	int a,b;
	
		do{
			printf("What do you want to do?\n\n");
			printf("1.calculate area of rectangle.\n2.calculate perimeter of rectangle\n");
			scanf("%d",&num);
			
			switch (num)
			{
				case 1:
					printf("a=");
					scanf("%d",&a);
					printf("\nb=");
					scanf("%d",&b);
					printf("%d\n",a*b);
					printf("do you want to continue or stop?\n");
					printf("1.continue\n2.stop\n");
					scanf("%d",&number);
					break;
					
				case 2:
					
					printf("a=");
					scanf("%d",&a);
					printf("b=");
					scanf("%d",&b);
					printf("%d\n",(a+b)*2);
					printf("do you want to continue or stop?\n");
					printf("1.continue\n2.stop\n");
					scanf("%d",&number);
					break;
				case 3:
					printf("do you want to continue or stop?\n");
					printf("1.continue\n2.stop\n");
					scanf("%d",&number);
					break;
					
				default:
					printf("");
					break;
	
			}	
		}while (number==1);
		printf("end.");
}
