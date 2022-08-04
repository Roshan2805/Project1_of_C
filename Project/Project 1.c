#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b,c,d,e;
	do
	{
		printf("\n You have selected Char Dham Yatra");
		printf("\n1.5N/6D \n2.7N/8D \n3.8N/9D \n4.9N/10D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&e);
		switch(e)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Arrive at Dehradun \n Relaxation at Hotel \n");
							printf("\n Day 2:Travel from Dehradun to Yamunotri \n Yamuna Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 3:Travel from Yamunotri to Gangotri \n Ganga Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 4:Travel from Gangotri to Kedarnath \n Kedarnath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 5:Travel from Badrinath to Kedarnath \n Badrinath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 6:Kedarnath to Dehradun");
							printf("\n \n");
							printf("\n Price per person= Rs.20,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&a);
					switch(a)
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
				while(a!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 7N/8D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Arrive at Dehradun \n Relaxation at Hotel \n");
							printf("\n Day 2:Dehradun Sightseeing \n");
							printf("\n Day 3:Travel from Dehradun to Yamunotri \n Yamuna Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 4:Travel from Yamunotri to Gangotri \n Ganga Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 5:Travel from Gangotri to Kedarnath \n Kedarnath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 6:Travel from Badrinath to Kedarnath \n Badrinath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 7:Kedarnath to Dehradun \n");
							printf("\n Day 8:Dehradun Relaxtion and Shopping at Market");
							printf("\n \n");
							printf("\n Price per person= Rs.35,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&b);
					switch(b)
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
				while(b!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 8N/9D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Arrive at Haridwar \n Relaxation at Hotel \n");
							printf("\n Day 2:Travel from Haridwar to Dehradun \n Sighseeing at Dehradun \n");
							printf("\n Day 3:Travel from Dehradun to Yamunotri \n Yamuna Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 4:Travel from Yamunotri to Gangotri \n Ganga Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 5:Travel from Gangotri to Kedarnath \n Kedarnath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 6:Travel from Badrinath to Kedarnath \n Badrinath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 7:Travel from Kedarnath to Dehradun \n Shopping and Sighseing at Dehradun \n overnight stay at Hotel \n");
							printf("\n Day 8:Travel from Dehradun to Haridwar \n overnight stay at Hotel \n");
							printf("\n Day 9:Haridwar Sightseeing and Relaxation \n");
							printf("\n \n");
							printf("\n Price per person= Rs.45,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&c);
					switch(c)
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
				while(c!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 9N/10D Option");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Arrive at Delhi \n Relaxation at Hotel \n");
							printf("\n Day 2:Delhi \n Sightseeing and Overnight Stay at Hotel \n");
							printf("\n Day 3:Travel from Delhi to Haridwar \n Sightseeing and Overnight Stay at Hotel \n");
							printf("\n Day 4:Travel from Haridwar to Dehradun \n Sighseeing at Dehradun \n");
							printf("\n Day 5:Travel from Dehradun to Yamunotri \n Yamuna Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 6:Travel from Yamunotri to Gangotri \n Ganga Mata Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 7:Travel from Gangotri to Kedarnath \n Kedarnath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 8:Travel from Badrinath to Kedarnath \n Badrinath Darshan at Temple \n Overnight Stay at Hotel \n");
							printf("\n Day 9:Travel from Kedarnath to Haridwar  \n overnight stay at Hotel \n");
							printf("\n Day 10:Travel from Haridwar to Delhi \n");
							printf("\n \n");
							printf("\n Price per person= Rs.65,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&d);
					switch(d)
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
				while(d!=2);
				
					
		}
	}
	while(e!=5);
}
