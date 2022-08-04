#include<stdio.h>
#include<stdlib.h>
main()
{
	int q,r,s,t,u;
	do
	{
		printf("\n You have selected Konkan Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&u);
		switch(u)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Alibag \n Sightseeing at Alibag(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation At Alibag beach \n Sightseeing at Alibag (Overnight stay at Hotel) \n");
							printf("\n Day 3:Departure from Alibag - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.5,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&q);
					switch(q)
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
				while(q!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Alibag \n Sightseeing at Alibag(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation At Alibag beach \n Sightseeing at Alibag (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Murud-Janjira \n Sightseeing at Murud \n Janjira fort Visit (Overnight stay at Hotel) \n");
							printf("\n Day 4:Departure from Murud - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.7,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&r);
					switch(r)
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
				while(r!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Alibag \n Sightseeing at Alibag(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation At Alibag beach \n Sightseeing at Alibag (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Murud-Janjira \n Sightseeing at Murud \n Janjira fort Visit (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Diveagar(Overnight stay at Hotel) \n");
							printf("\n Day 5:Sighseeing and Beach visit at Diveagar \n Departure from Diveagar - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.10,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&s);
					switch(s)
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
				while(s!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
						printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Alibag \n Sightseeing at Alibag(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation At Alibag beach \n Sightseeing at Alibag (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Murud-Janjira \n Sightseeing at Murud \n Janjira fort Visit (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Diveagar(Overnight stay at Hotel) \n");
							printf("\n Day 5:Sighseeing and Beach visit at Diveagar \n Travel to Harihareshwar(Overnight stay at Hotel) \n");
							printf("\n Day 6:Sightseeing and beach visit \n Departure from Harihareshwar - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.12,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&t);
					switch(t)
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
				while(t!=2);
				
					
		}
	}
	while(u!=5);
}
