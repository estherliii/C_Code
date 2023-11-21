#include <stdio.h>

int main() {
    int username;
    int password;
    int choice;
    char mMenu[5][30];
    char sMenu[5][30];
    float price[5];
    int n;

    printf("Welcome to KFC Traditional Ordering Platform!\n\n");

    do {
        printf("Staff Log In:\n");
        printf("Username:");
        scanf("%d", &username);
        printf("Password:");
        scanf("%d", &password);
    } while (username != 545611 || password != 202309);

    do {
        printf("\n1. Menu\n2. Order menu\nYour Choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Your menu printing code here
                break;
            case 2:
                printf("\nOrder Menu:\n");
                for (int i = 0; i < 5; i++) {
                    printf("%d:\n", i + 1);
                    
					
					printf("Main Menu:");
                    getchar();
					gets(mMenu[i]);

                    printf("Sub Menu:");
                    
                    gets(sMenu[i]);

                    printf("Price:");
                    scanf("%f", &price[i]);
                	
				}
                break;
            default:
                printf("END");
                break;
        }
    } while (choice != 2);

    return 0;
}

