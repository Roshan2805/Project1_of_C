#include<stdio.h>
#include<stdlib.h>
main()
{
	int af,ag,ah,ai,aj;
	do
	{
		printf("\n You have selected Goa Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&aj);
		switch(aj)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Goa \n Travel to Panaji \n Sightseeing at Panaji(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Panaji (Overnight stay at Hotel) \n");
							printf("\n Day 3:Departure from Goa - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.5,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&af);
					switch(af)
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
				while(af!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Goa \n Travel to Panaji \n Sightseeing at Panaji(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Panaji (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit to Vasco da gama \n Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 4:Departure from Goa - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.6,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ag);
					switch(ag)
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
				while(ag!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Goa \n Travel to Panaji \n Sightseeing at Panaji(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Panaji (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit to Vasco da gama \n Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 4:Visit to Miramar \n Sightseeing and Brach visit at Miramar (Overnight Stay at Hotel) \n");
							printf("\n Day 5:Departure from Goa - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.7,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ah);
					switch(ah)
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
				while(ah!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Goa \n Travel to Panaji \n Sightseeing at Panaji(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Panaji (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit to Vasco da gama \n Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 4:Visit to Miramar \n Sightseeing and Brach visit at Miramar (Overnight Stay at Hotel) \n");
							printf("\n Day 5:Visit at Famous Santa Cruz Church \n Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 6:Departure from Goa - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.8,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ai);
					switch(ai)
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
				while(ai!=2);
				
					
		}
	}
	while(aj!=5);
}
