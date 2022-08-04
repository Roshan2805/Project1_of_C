#include<stdio.h>
#include<stdlib.h>
main()
{
	int aa,ab,ac,ad,ae;
	do
	{
		printf("\n You have selected Kerala Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&ae);
		switch(ae)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Kochi(Kerala) \n Sightseeing at Kochi(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Kochi (Overnight stay at Hotel) \n");
							printf("\n Day 3:Departure from Kochi - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.8,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&aa);
					switch(aa)
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
				while(aa!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Kochi(Kerala)\n Sightseeing at Kochi(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Kochi (Overnight stay at Hotel) \n");
							printf("\n Day 3:Near by Temple Visit \n Relaxation at beach(Overnight stay at Hotel) \n");
							printf("\n Day 4:Departure from Kochi - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.9,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ab);
					switch(ab)
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
				while(ab!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Kochi(Kerala)\n Sightseeing at Kochi(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Kochi (Overnight stay at Hotel) \n");
							printf("\n Day 3:Near by Temple Visit \n Relaxation at beach(Overnight stay at Hotel) \n");
							printf("\n Day 4:Travel to Thiruvananthapuram \n Temple Visit (Overnight stay at Hotel) \n");
							printf("\n Day 5:Return to Kochi \n Departure from Kochi - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.11,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ac);
					switch(ac)
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
				while(ac!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Kochi(Kerala)\n Travel to Kannur(Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing, Beach visit at Kannur (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Thiruvananthapuram (Overnight stay at Hotel) \n");
							printf("\n Day 4:Relaxation at Thiruvananthapuram \n Sightseeing and Beach visit (Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel to Kochi \n Sightseeing (Overnight stay at Hotel) \n");
							printf("\n Day 6:Beach Visit at Kochi \n Departure from Kochi - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.13,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ad);
					switch(ad)
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
				while(ad!=2);
				
					
		}
	}
	while(ae!=5);
}
