#include<stdio.h>
#include<stdlib.h>
main()
{
	int num,num1,num2,num3,num4;
	int choi1,choi2;
	printf("\t\t\tWelcome To Luxurious Tourisam");
	printf("\n\t\t\tWe Provide Best Tour Services");
	printf("\nPlease Choose/Select type of Travel");
	printf("\n1.Family\n2.Couple\n3.Solo\n4.Friends");
	printf("\nPlease Enter Here =");
	scanf("%d",&num);
	switch(num)
	{
	
		case 1: 
				printf("\nYou Selected Family");
				printf("\nPlease Select Destination :");
				printf("\nPress 1 for 4 Dham\nPress 2 for Kedarnath\nPress 3 for Kokan\nPress 4 for KanyaKumari");
				printf("Please Enter Here =");
				scanf("%d",&num1);
				switch(num1)
				{
					case 1:
						printf("\nYou Selected 4 Dham");
						break;
					case 2:
						printf("\nYou Selected Kedarnath");
						break;
					case 3:
						printf("\nYou Selected Kokan");
						break;
					case 4:
						printf("\nYou Selected KanyaKumari");
						break;	
					default :
						printf("\nYou Entered Wrong Input\nPlease try Again");
						
				}
				break;
		case 2:
				printf("\nYou Selected Couple");
				printf("\nPlease Select Destination :");
				printf("\nPress 1 for 'Mahabaleshwer'\nPress 2 for 'Goa'\nPress 3 for 'Manali'\nPress 4 for 'Kerala'");
				printf("\nPlease Enter Here =");
				scanf("%d",&num2);
				switch(num2)
				{
					case 1:
						printf("\nYou Selected Mahabaleshwer");
						break;
					case 2:
						printf("\nYou Selected Goa");
						break;
					case 3:
						printf("\nYou Selected Manali");
						break;
					case 4:
						printf("\nYou Selected Kerala");
						break;	
					default :
						printf("\nYou Entered Wrong Input\nPlease try Again");
				}
				
				break;
		case 3:
				printf("\nYou Selected Solo");
				printf("\nEnter 1 For Tracking Location\nEnter 2 For Other locations");
				printf("\nPlease Enter Here=");
				scanf("%d",&num3);
				switch(num3)
				{
					case 1:
						printf("\nYou Selectd Tracking");
						printf("\nPlease Select Destination :");
						printf("\nPress 1 for K2K mountain\nPress 2 for Kalsubai mountain\nPress 3 for Mount Abu\nPress 4 for Mount Everest");
						printf("\nPlease Eneter Preference =");
						scanf("%d",&choi1);
						switch(choi1)
						{
					case 1:
						printf("\nYou Selected K2K mountain");
						break;
					case 2:
						printf("\nYou Selected Kalsubai mountain");
						break;
					case 3:
						printf("\nYou Selected Mount Abu");
						break;
					case 4:
						printf("\nYou Selected Mount Everest");
						break;	
					default :
						printf("\nYou Entered Wrong Input\nPlease try Again");
						}
						break;
					case 2:
						printf("\nPlease Select Destination :");
						printf("\nPress 1 for 'Mahabaleshwer'\nPress 2 for 'Goa'\nPress 3 for 'Manali'\nPress 4 for 'Kerala'");
						printf("\nPress 5 for 4 Dham\nPress 6 for Kedarnath\nPress 7 for Kokan\nPress 8 for KanyaKumari");
						printf("\nPlease Eneter Preference =");
						scanf("%d",&choi2);
						switch(choi2)
					{
					case 1:
						printf("\nYou Selected Mahabaleshwer");
						break;
					case 2:
						printf("\nYou Selected Goa");
						break;
					case 3:
						printf("\nYou Selected Manali");
						break;
					case 4:
						printf("\nYou Selected Kerala");
						break;	
					case 5:
						printf("\nYou Selected 4 Dham");
						break;
					case 6:
						printf("\nYou Selected Kedarnath");
						break;
					case 7:
						printf("\nYou Selected Kokan");
						break;
					case 8:
						printf("\nYou Selected KanyaKumari");
						break;
					default :
						printf("\nYou Entered Wrong Input\nPlease try Again");	
					}
						break;		
				}
				break;	
		case 4:
				printf("You Selected With Friends");
				printf("\nPlease Select Destination :");
				printf("\nPress 1 for 'Mahabaleshwer'\nPress 2 for 'Goa'\nPress 3 for 'Manali'\nPress 4 for 'Kerala'");
				printf("\nPress 5 for 4 Dham\nPress 6 for Kedarnath\nPress 7 for Kokan\nPress 8 for KanyaKumari");
				printf("\nPress 9 for K2K mountain\nPress 10 for Kalsubai mountain\nPress 11 for Mount Abu\nPress 12 for Mount Everest");
				printf("Please Eneter Preference =");
				scanf("%d",&num4);
				switch(num4)
					{
					case 1:
						printf("\nYou Selected Mahabaleshwer");
						break;
					case 2:
						printf("\nYou Selected Goa");
						break;
					case 3:
						printf("\nYou Selected Manali");
						break;
					case 4:
						printf("\nYou Selected Kerala");
						break;	
					case 5:
						printf("\nYou Selected 4 Dham");
						break;
					case 6:
						printf("\nYou Selected Kedarnath");
						break;
					case 7:
						printf("\nYou Selected Kokan");
						break;
					case 8:
						printf("\nYou Selected KanyaKumari");
						break;	
					case 9:
						printf("\nYou Selected K2K mountain");
						break;
					case 10:
						printf("\nYou Selected Kalsubai mountain");
						break;
					case 11:
						printf("\nYou Selected Mount Abu");
						break;
					case 12:
						printf("\nYou Selected Mount Everest");
						break;	
					default :
						printf("\nYou Entered Wrong Input\nPlease try Again");
					}
						break;		
				break;	
	}
	
}
