#include<stdio.h>
#include<stdlib.h>
main()
{
	int ap,aq,ar,as,at;
	do
	{
		printf("\n You have selected Trekking");
		printf("\n1.6N/7D \n2.3N/4D \n3.4N/5D \n4.11N/12D \n5.Exit");
		printf("\n Please Select your prefrence=");
		scanf("%d",&at);
		switch(at)
		{
			case 1:
				do
				{
					printf("\n");
					printf("\n You selected 5N/6D Option");
					printf("\n Brahmatal Trek");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Drive from Rishikesh to Lohajung \n");
							printf("\n Day 2:Trek from Lohajungto Gujrani (Overnight camping) \n");
							printf("\n Day 3:Gujrani to Tilandi (Overnight camping) \n");
							printf("\n Day 4:Tilandi to Brahmatal (Overnight camping) \n");
							printf("\n Day 5:Brahmatal to Lohajung (Overnight camping) \n");
							printf("\n Day 6:Drive from Lohajung to Rishikesh");
			
							printf("\n \n");
							printf("\n Price per person= Rs.9,500.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ap);
					switch(ap)
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
				while(ap!=2);
			
			case 2:
				do
				{
					printf("\n");
					printf("\n You selected 3N/4D Option");
					printf("\n Kalsubai trek");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Kalsubai (Overnight Stay at Hotel) \n");
							printf("\n Day 2:Trek to Kalsubai Mountain (Overnight Camping) \n");
							printf("\n Day 3:Retrun trek to base camp (Overnight stay at Hotel) \n");
							printf("\n Day 4:Return to Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.6,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&aq);
					switch(aq)
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
				while(aq!=2);
			
			case 3:
				do
				{
					printf("\n");
					printf("\n You selected 4N/5D Option");
					printf("\n Mount Abu Trek/Hikking");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:Mumbai to Udaipur (Overnight Stay at Hotel) \n");
							printf("\n Day 2:Relaxation and Sightseeing at Udaipur (Overnight stay at Hotel) \n");
							printf("\n Day 3:Travel to Mount Abu \n Sightseeing and Retrun to mount Abu (Overnight stay at Hotel) \n");
							printf("\n Day 4:Hikking / Trek at Mount Abu to Arbuda Devi Temple \n Return to Mount Abu(Overnight stay at Hotel) \n");
							printf("\n Day 5:Travel to Udaipur \n Departure from Udaipur - Mumbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.7,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&ar);
					switch(ar)
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
				while(ar!=2);
			
			case 4:
				do
				{
					printf("\n");
					printf("\n You selected 11N/12D Option");
					printf("\n Everest Trek");
							printf("\n");
							printf("\n \t\t Tour Itinerary");
							printf("\n Day 1:fly Mumbai to Kathmandu \n Arrival to Kathmandu, Then Walk to Monjo \n Fly To The World's Most Adventurous Flight Lukla \n");
							printf("\n Day 2:Monjo to Namche Bazaar \n A Historic Trading Hub \n");
							printf("\n Day 3:Acclimatization at Namche \n Get The Best Views of The Highest Peaks \n");
							printf("\n Day 4:Namche to Dingboche \n Witness the famous Tengboche Monastery \n");
							printf("\n Day 5:Pangboche to Dingboche \n Explore the Village of Imja Khole Valley \n");
							printf("\n Day 6:Acclimatization day at Dingboche \n Adore the World's Top Three Mountain Peaks \n");
							printf("\n Day 7:Dingboche to Lobuche \n Trail to Base Camp \n");
							printf("\n Day 8:Lobuche to Gorakshep to Everest Base Camp and come back to Gorakshep \n The Ultimate Adventure Day \n");
							printf("\n Day 9:Hiking to Kala Patthar \n Descend to Pheriche; Explore the Gigantic Views of Mt. Everest \n");
							printf("\n Day 10:Pheriche to Namche Bazaar \n Buy Some Yak Cheese & Butter \n");
							printf("\n Day 11:Namche Bazaar to Lukla \n The Last Hike \n");
							printf("\n Day 12:Lukla to Kathmandu \n Goodbye to the Mountains with Lots of Memories \n fly Kathmandu to Mummbai");
			
							printf("\n \n");
							printf("\n Price per person= Rs.28,000.");
					printf("\n1.Yes \n2.Exit");
					scanf("%d",&as);
					switch(as)
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
				while(as!=2);
				
					
		}
	}
	while(at!=5);
}
