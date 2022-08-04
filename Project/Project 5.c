#include<stdio.h>
#include<stdlib.h>
main()
{
	int v,w,x,y,z;
	do
	{
		printf("\n You have selected Mahableshwar Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&z);
		switch(z)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Mahableshwar \n Sightseeing at Mahableshwar(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Mahableshwar (Overnight stay at Hotel) \n");
							printf("\n Day 3:Departure from Mahableshwar - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.5,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&v);
					switch(v)
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
				while(v!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Mahableshwar \n Sightseeing at Mahableshwar(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Mahableshwar (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit at Panchgani and Sightseeing \n Retrun to Mahableshwar(Overnight stay at Hotel) \n");
							printf("\n Day 4:Departure from Mahableshwar - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.7,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&w);
					switch(w)
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
				while(w!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Mahableshwar \n Sightseeing at Mahableshwar(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Mahableshwar (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit at Panchgani and Sightseeing \n Retrun to Mahableshwar(Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Satara \n Shopping and Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 5:Departure from Satara - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.8,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&x);
					switch(x)
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
				while(x!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
		
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Mahableshwar \n Sightseeing at Mahableshwar(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Mahableshwar (Overnight stay at Hotel) \n");
							printf("\n Day 3:Visit at Panchgani and Sightseeing \n Retrun to Mahableshwar(Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Satara \n Shopping and Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel to Kolhapur \n Sightseeing at Kolhapur(Overnight Stay at Hotel) \n");
							printf("\n Day 5:Departure from Kolhapur - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.9,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&y);
					switch(y)
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
				while(y!=2);
				
					
		}
	}
	while(z!=5);
}
