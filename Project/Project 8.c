#include<stdio.h>
#include<stdlib.h>
main()
{
	int ak,al,am,an,ao;
	do
	{
		printf("\n You have selected Manali Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&ao);
		switch(ao)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Manali(Bhuntar Airport) \n Travel to Manali \n Sightseeing at Manali(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Manali (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Bhuntar \n Departure from Manali(Bhuntar Airport) - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.5,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ak);
					switch(ak)
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
				while(ak!=2);
			break;
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Manali(Bhuntar Airport) \n Travel to Manali \n Sightseeing at Manali(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Manali (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Kullu \n Sightseeing and Relaxation at Kullu (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Bhuntar \n Departure from Kullu(Bhuntar Airport) - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.6,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&al);
					switch(al)
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
				while(al!=2);
			break;
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Manali(Bhuntar Airport) \n Travel to Manali \n Sightseeing at Manali(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Manali (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Rohtang pass and Atal Tunnel \n Sightseeing and Retrun to Manali (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Kullu \n Sightseeing and Relaxation at Kullu (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel to Bhuntar \n Departure from Kullu(Bhuntar Airport) - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.7,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&am);
					switch(am)
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
				while(am!=2);
			break;
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Manali(Bhuntar Airport) \n Travel to Manali \n Sightseeing at Manali(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Manali (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Rohtang pass and Atal Tunnel \n Sightseeing and Retrun to Manali (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Kullu \n Sightseeing and Relaxation at Kullu (Overnight stay at Hotel) \n");
							printf("\n Day 5:Aother day at Kullu \n Relaxation and Shooping (Overnight stay at Hotel) \n");
							printf("\n Day 6:Travel to Bhuntar \n Departure from Kullu(Bhuntar Airport) - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.8,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&an);
					switch(an)
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
				while(an!=2);
			break;	
					
		}
	}
	while(ao!=5);
}
