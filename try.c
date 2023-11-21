#include<stdio.h>
void main(){
	int a;
	scanf("%d",&a);
	if(a%2==0){
		printf("no.\n");
	}
	else{
		for(int j=1;j<=(a/2)+1;j++){
			for(int n=0;n<=j-1;n++){
				printf(" ");
			}
			for(int i=a-(j-1)*2;i>0;i=i-1){
				printf("*");
			}
			printf("\n");
		}
	}
}
