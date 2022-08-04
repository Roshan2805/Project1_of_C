#include<stdio.h>
#include<stdlib.h>
main()
{
	int k,l,m,p,o;
	do
	{
		printf("\n You have selected Kanyakumari Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&o);
		switch(o)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Trivandrum \n Sightseeing at Trivandrum(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Trivandrum to Kanyakumari \n Sightseeing at Kanyakumari then return to Trivandrum(Overnight stay at Hotel) \n");
							printf("\n Day 3:Departure from Trivandrum - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.9,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&k);
					switch(k)
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
				while(k!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Trivandrum \n Sightseeing at Trivandrum(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Trivandrum to Kanyakumari \n Sightseeing at Kanyakumari (Overnight stay at Hotel) \n");
							printf("\n Day 3:Return to Trivandrum and Sightseeing \n Shoping (Overnight stay at Hotel) \n");
							printf("\n Day 4:Departure from Trivandrum - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.11,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&l);
					switch(l)
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
				while(l!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Trivandrum \n Sightseeing at Trivandrum(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Trivandrum to Kanyakumari \n Sightseeing at Kanyakumari (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Triunelveli (Overnight stay at Hotel) \n");
							printf("\n Day 4:Sightssing at Triunelveli (Overnight stay at Hotel) \n");
							printf("\n Day 5:Departure from Triunelveli - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.13,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&m);
					switch(m)
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
				while(m!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Trivandrum \n Sightseeing at Trivandrum(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Trivandrum to Kanyakumari \n Sightseeing at Kanyakumari (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Triunelveli (Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Rameshwaram (Overnight stay at Hotel) \n");
							printf("\n Day 5:Temple Visit and Darshan \n Retrun to Madurai(Overnight stay at Hotel) \n");
							printf("\n Day 5:Departure from Madurai - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.16,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&p);
					switch(p)
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
				while(p!=2);
				
					
		}
	}
	while(o!=5);
}
