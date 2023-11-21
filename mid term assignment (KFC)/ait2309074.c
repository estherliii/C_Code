#include <stdio.h>

int main() {
    int username, password, choice;
    char mMenu[5][30];
    char sMenu[5][30];
    float price[5];
    float sum; 
    float received;
    int n;

    printf("Welcome to KFC Ordering Platform!\n\n");

    // Staff login
    do {
        printf("Staff Log In: \n");
        printf("Username: ");
        scanf("%d", &username);
        printf("Password: ");
        scanf("%d", &password);
    } while (username != 545611 || password != 202309);

    do{
		do {
	        printf("\n1. Menu\n2. Order menu\nYour Choice:");
	        scanf("%d", &choice);
	
	        switch (choice) {
	            case 1:
	
	                printf(""
					"\nMain Menu            Sub Menu           Price (RM)\n"
					"**************************************************\n"
					"                    Banana Chocolate      7.50   \n"
					"Limited Time Only   Crispy Meal           26.50\n"
					"                    Golden Matcha Balls   9.50\n"
				    "**************************************************\n"
	                "                    5 Pieces Combo        42.00 \n"
				    "Family Buckets      9 Pieces Combo        68.00\n"
				    "                    15 Pieces Combo       99.00\n"
				    "**************************************************\n"
				    "                    Zinger Box            21.00\n"
				    "Box Meals           Snacker Box           12.00\n"
				    "                    Classic Box           17.50\n"
				    "**************************************************\n"
				    "                    Snack Plate           18.00\n"
				    "Chicken             Dinner Plate          22.50\n"
				    "                    15 Pieces Chicken     91.00\n"
				    "**************************************************\n"
				    "                    Classic Colonel       8.50\n"
				    "Twister and Burger  Stacker Zinger        18.90\n"
				    "                    Cheezy Zinger         20.50\n"
				    "**************************************************\n"
				    "Tenders and Nuggets Nuggets 6 Pieces      10.50\n"
				    "                    Nuggets 9 Pieces      14.50\n"
				    "**************************************************\n"
				    "                    Kid Meal Set A        12.99\n"
				    "Kids Meal           Kid Meal Set B        12.99\n"
				    "                    Kid Meal Set C        12.99\n"
				    "**************************************************\n"
				    "                    Coca Cola             4.70\n"
				    "Beverages           White Coffee          5.70\n"
				    "                    Milo                  6.80\n"
				    "");
	                break;
	            case 2:
	
	                printf("\nOrder Menu:\n");
	                for (int i = 0; i < 5; i++) {
	                    printf("%d:\n", i + 1);
	
	
	                    getchar();
	
	                    printf("Main Menu:");
	                    fgets(mMenu[i], sizeof(mMenu[i]), stdin);
	                    mMenu[i][strcspn(mMenu[i], "\n")] = '\0'; 
	
	                    printf("Sub Menu:");
	                    fgets(sMenu[i], sizeof(sMenu[i]), stdin);
	                    sMenu[i][strcspn(sMenu[i], "\n")] = '\0';
	
	                    printf("Price:");
	                    scanf("%f", &price[i]);
	                }
	                printf("\nYour Menu\n");
					for(int j=0;j<5;j++){
						printf("%d. %s\t%s\t%.2f\n",j+1,mMenu[j],sMenu[j],price[j]);
						sum=sum+price[j];
					}
					printf("\n*****************************************\n");
					printf("Total: %.2f\n",sum);
					printf("Money recieved: ") ;
					scanf("%f",&received);
					printf("Balanced: %.2f\n",received-sum);
					printf("\n1. Order Again  2.Exit\n");
					printf("Your choice: ");
					scanf("%d",&n);
					
	                break;
	            default:
	                printf("END\n");
	                break;
	        }
	    } while (choice != 2);
    }while(n==1);
    return 0;
}
