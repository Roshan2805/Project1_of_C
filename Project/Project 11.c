#include<stdio.h>
#include<stdlib.h>
main()
{
	int ba,bb,bc,bd;
	do
	{
		printf("\n Your choice is Leh - Ladakh");
		printf("\n1.5N/6D \n2.6N/7D \n3.7N/8D");
		printf("\n Selelct your choice=");
		scanf("%d",&ba);
		switch(ba)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You have selected 5N/6D option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Leh (Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel from Leh to Nubra Valley \n Sightseeing at Leh and Nubra Valley (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel from Nubra Valley to Pangong Lake \n Sightseeing at Pangong Lake (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel from Pangong Lake to Leh \n Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 6:Deaprture form Leh - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.35,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&bb);
					switch(bb)
					{
						case 1:
							
							break;
						case 2:
							exit(0);
						default:
							printf("\n Wrong Choice");
							break;
					}
				}
				while(bb!=2);
			break;
					
			case 2:
				do
				{
					printf("\n");
					printf("\n You have selected 6N/7D option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Leh (Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel from Leh to Nubra Valley \n Sightseeing at Leh and Nubra Valley (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel from Nubra Valley to Pangong Lake \n Sightseeing at Pangong Lake (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel from Pangong Lake to Leh \n Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 6:Sighseeing at Leh and Relaxation (Overnight stay at Hotel) \n");
							printf("\n Day 6:Deaprture form Leh - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.40,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&bc);
					switch(bc)
					{
						case 1:
							
							break;
						case 2:
							exit(0);
						default:
							printf("\n Wrong Choice");
							break;
					}
				
				}
					while(bc!=2);
			break;
					
			case 3:
				do
				{
					printf("\n");
					printf("\n You have selected 7N/8D option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Leh (Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel from Leh to Nubra Valley \n Sightseeing at Leh and Nubra Valley (Overnight stay at Hotel) \n");
							printf("\n Day 4:Sightseeing at Nubra Valley (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel from Nubra Valley to Pangong Lake \n Sightseeing at Pangong Lake (Overnight stay at Hotel) \n");
							printf("\n Day 6:Travel from Pangong Lake to Leh \n Sightseeing at Leh (Overnight stay at Hotel) \n");
							printf("\n Day 7:Sighseeing at Leh and Relaxation (Overnight stay at Hotel) \n");
							printf("\n Day 8:Deaprture form Leh - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.45,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&bd);
					switch(bd)
					{
						case 1:
							
							break;
						case 2:
							exit(0);
						default:
							printf("\n Wrong Choice");
							break;
					}
				
				}
					while(bd!=2);
			break;
					
			case 4:
				exit(0);
			default:
				printf("\n Wrong Choice");
				break;
		}
	}
	while(ba!=4);
}
