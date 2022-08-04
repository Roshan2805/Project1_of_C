#include<stdio.h>
#include<stdlib.h>
main()
{
	int f,g,h,i,j;
	do
	{
		printf("\n You have selected Asthavinayak Yatra");
		printf("\n1.2N/3D \n2.3N/4D \n3.4N/5D \n4.5N/6D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&j);
		switch(j)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 2N/3D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai - ozar - Lenyadri - Ranjangaon - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 2:Pune - Prati balaji - Jejuri - Morgaon - Siddhatek - Theur - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 3:Departure from Mahad - Pali - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.8,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&f);
					switch(f)
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
				while(f!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai - ozar - Lenyadri - Ranjangaon - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 2:Relaxation in Pune and Sightseeing \n");
							printf("\n Day 3:Pune - Prati balaji - Jejuri - Morgaon - Siddhatek - Theur - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 4:Departure from Mahad - Pali - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.9,500.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&g);
					switch(g)
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
				while(g!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai - ozar - Lenyadri - Ranjangaon - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 2:Relaxation in Pune and Sightseeing \n");
							printf("\n Day 3:Pune - Prati balaji - Jejuri - Morgaon - Siddhatek - Theur - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 4:Relaxation in Pune and Sightseeing \n");
							printf("\n Day 5:Departure from Mahad - Pali - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.11,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&h);
					switch(h)
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
				while(h!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
						printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai - ozar - Lenyadri - Ranjangaon - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 2:Relaxation in Pune and Sightseeing \n");
							printf("\n Day 3:Pune - Prati balaji - Jejuri - Morgaon (Overnight Stay in Morgaon) \n");
							printf("\n Day 4:Siddhatek - Theur - Pune (Overnight Stay in Pune) \n");
							printf("\n Day 5:Relaxation in Pune and Sightseeing \n");
							printf("\n Day 6:Departure from Mahad - Pali - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.15,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&i);
					switch(i)
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
				while(i!=2);
				
					
		}
	}
	while(j!=5);
}
