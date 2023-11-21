#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
	int choice, n, c, i;
    char mMenu[8][30];
    char sMenu[23][30];
    char mainMenu[5];
    char subMenu[5];
    float price[23];
    float Price[5];
    float sum = 0.0;
    float received;
    int m[5];
    int s[5];

    printf("Welcome to KFC Traditional Ordering Platform!\n");
    printf("*********************************************\n"); 
	
	strcpy(mMenu[0], "Limited Time Only");	
	strcpy(mMenu[1], "Family Buckets");
	strcpy(mMenu[2], "Box Meals");
	strcpy(mMenu[3], "Chicken");
	strcpy(mMenu[4], "Twister and Burger");
	strcpy(mMenu[5], "Tenders and Nuggets");
	strcpy(mMenu[6], "Kids Meal");
	strcpy(mMenu[7], "Beverages");
	
	strcpy(sMenu[0],"Banana Chocolate");price[0]=7.50;
	strcpy(sMenu[1],"Crispy Meal");price[1]=26.50;
	strcpy(sMenu[2],"Golden Matcha Balls");price[2]=9.50;
	strcpy(sMenu[3],"5 Pieces Combo");price[3]=42.00;
	strcpy(sMenu[4],"9 Pieces Combo");price[4]=68.00;
	strcpy(sMenu[5],"15 Pieces Combo");price[5]=99.00;
	strcpy(sMenu[6],"Zinger Box");price[6]=21.00;
	strcpy(sMenu[7],"Snacker Box");price[7]=12.00;
	strcpy(sMenu[8],"Classic Box");price[8]=17.50;
	strcpy(sMenu[9],"Snack Plate");price[9]=18.00;
	strcpy(sMenu[10],"Dinner Plate");price[10]=22.50;
	strcpy(sMenu[11],"15 Pieces Chicken");price[11]=91.00;
	strcpy(sMenu[12],"Classic Colone");price[12]=8.50;
	strcpy(sMenu[13],"Stacker Zinger");price[13]=18.90;
	strcpy(sMenu[14],"Cheezy Zinger ");price[14]=20.50;
	strcpy(sMenu[15],"Nuggets 6 Pieces");price[15]=10.50;
	strcpy(sMenu[16],"Nuggets 9 Pieces");price[16]=14.50;
	strcpy(sMenu[17],"Kid Meal Set A");price[17]=12.99;
	strcpy(sMenu[18],"Kid Meal Set B");price[18]=12.99;
	strcpy(sMenu[19],"Kid Meal Set ");price[19]=12.99;
	strcpy(sMenu[20],"Coca Cola");price[20]=4.70;
	strcpy(sMenu[21],"White Coffe");price[21]=5.70;
	strcpy(sMenu[22],"Milo");price[22]=6.80;
	
    // Staff login
    do {
        printf("Staff Log In:\n");
        printf("Username:");
        scanf("%s", &username);
        printf("Password:");
        scanf("%s", &password);
    } while (strcmp(username, "545611") != 0 || strcmp(password, "202309") != 0);

    do {
        sum = 0.0;  
        do {
            printf("\n1. Menu\n2. Order menu\nYour Choice:");
            scanf("%d", &choice);

            switch (choice) {
                //Print menu
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
                    // Order menu
                    printf("\nOrder Menu:");
                    for (i = 0; i < 5; i++) {
                        printf("\n%d:\n", i + 1);

                        printf("Select Main Menu:");
                        for (int k=0;k<8;k++){
                        	printf("\n%d. %s",k+1,mMenu[k]);
						}
						printf("\nYour choice: ");
                        scanf("%d",&m[i]);
						printf("\nSelect Sub Menu:");
						switch(m[i]-1){
							case 0:
								for (int m0=0;m0<3;m0++){
									printf("\n%d. %s\t%.2f",m0+1,sMenu[m0],price[m0]);
								}
								break;
							case 1:
								for (int m1=3;m1<6;m1++){
									printf("\n%d. %s\t%.2f",m1+1,sMenu[m1],price[m1]);
								}
								break;
							case 2:
								for (int m2=6;m2<9;m2++){
									printf("\n%d. %s\t%.2f",m2+1,sMenu[m2],price[m2]);
								}
								break;
							case 3:
								for (int m3=9;m3<12;m3++){
									printf("\n%d. %s\t%.2f",m3+1,sMenu[m3],price[m3]);
								}
								break;
							case 4:
								for (int m4=12;m4<15;m4++){
									printf("\n%d. %s\t%.2f",m4+1,sMenu[m4],price[m4]);
								}
								break;
							case 5:
								for (int m5=15;m5<17;m5++){
									printf("\n%d. %s\t%.2f",m5+1,sMenu[m5],price[m5]);
								}
								break;
							case 6:
								for (int m6=17;m6<20;m6++){
									printf("\n%d. %s\t%.2f",m6+1,sMenu[m6],price[m6]);
								}
								break;
							case 7:
								for (int m7=20;m7<23;m7++){
									printf("\n%d. %s\t%.2f",m7+1,sMenu[m7],price[m7]);
								}
								break;
						
						}
						printf("\nYour Choice: ");
					    scanf("%d", &s[i]);
						
						if (i==4){
							break;
						}
						 
					    printf("\n1. Order More?  2. Finish");
					    printf("\nYour Choice:");
					    scanf("%d", &c);
					
					    if (c == 1) {
					        continue;
					    } 
						else {
					        break;
					    }
					}
					
					// Print the ordered menu
					printf("\n\nYour Menu\n");
					
					for (int h = 0; h <=i; h++) {
					    Price[h] = price[s[h]-1];
					}
					
					for (int j = 0; j <=i; j++) {
					    printf("%d. %-20s\t%-20s\t%-20.2f\n", j + 1, mMenu[m[j]-1], sMenu[s[j]-1], Price[j]);
					}
					
					for (int t = 0; t <=i; t++) {
					    sum += Price[t];
					}
					
					printf("\n*****************************************\n");
					printf("Total: %.2f\n", sum);
					printf("Money received:");
					scanf("%f", &received);
					printf("Balanced: %.2f\n", received - sum);
					printf("\n1. Order Again  2.Exit\n");
					printf("Your choice: ");
					scanf("%d", &n);
					break;
                default:
                    break;
            }
        } while (choice == 1);
    } while (n == 1&& choice==1);
	printf("\nThank you.");
    return 0;
}

