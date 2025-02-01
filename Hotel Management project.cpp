#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct room
{
	char name[30];
	char nat[15];
	int day,cnt;
	char from[60];
	char to[30];
	int prc;
	
}room[20];

int main()
{
	int a,c,d,za=9,zb=11;
	char b[30]={'\0'};
	
	
	c:
	printf("\n\n\n\n");
	printf("      *******************************************************************\n");
	printf("     *                                                                   *\n");
	printf("     *                                                                   *\n");
	printf("     *             Welcome  TO  MUNEEB AND CO. Hotel                   *\n");
	printf("     *                                                                   *\n");
	printf("     *                                                                   *\n");
	printf("      *******************************************************************\n");
	printf("\n\n\n\n\n");
	printf("\t --------------------------------------------------------\n");
	printf("\t|                                                        |\n");
	printf("\t|\tChoose a category\t\t\t\t |\n\t|\t\t\t\t\t\t\t |\n");
	printf("\t|\t1.Get availability                               |\n");
	printf("\t|\t2.Features of room                               |\n");
	printf("\t|\t3.Room Allocation                                |\n");
	printf("\t|\t4.Show Customer Details                          |\n");
	printf("\t|\t5.Restaurant                                     |\n");
	printf("\t|\t6.Cancellation                                   |\n"); 
	printf("\t|\t7.Room Deallocation                              |\n");
	printf("\t|\t8.Exit\t\t\t                         |\n\t|\t\t\t\t\t\t\t |\n");
	printf("\t --------------------------------------------------------\n");
	printf("\n\t\tEnter the category you want to select: ");
	scanf("%d",& a);
	printf("\n\n\n\n");
	
	
	
	switch(a)
	{
		case 1:                                                 
		system("cls");
		printf("\n\n\n\n");		
		printf("       -------------------------------------------------------------\n");
		printf("      |                       Room Availability                     |\n");
		printf("       -------------------------------------------------------------\n\r");
		printf("\n\n");
		printf("\tRoom No\t|   Room Type\t|  Charges  |  Total  |   Available\n");
		printf("\n");
		printf("\t1\t  Predntl Suite\t   9,800\t09\t     %d\n",za);
		printf("\t2\t  Exctive Room\t   6,500\t11\t     %d\n",zb);
		printf("\n       -------------------------------------------------------------\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");		
		printf("       -------------------------------------------------------------\n");
		printf("      |                               Rooms                         |\n");
		printf("       -------------------------------------------------------------\n\r");
		printf("\n\tRoom |  Room  |      From      |      To     |     Name\n");
		printf("\t NO  |  Type  |                |             |   \n\n");
		for(int i=0;i<9;i++)
		{printf("\n\t %d      Pre      %s      %s  %s",i+1,room[i].from,room[i].to,room[i].name);}
		for(int i=9;i<20;i++)  
		{printf("\n\t %d     Exc      %s      %s  %s",i+1,room[i].from,room[i].to,room[i].name);}
		printf("\n       -------------------------------------------------------------\n");
		printf("\n\tPress 1 for Room Allocation and press any No for main menu: ");
		scanf("%d",&d);
		if(d==1)
		{
			int ab;
			goto ab;
		}
		else
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 2:                                                           
		cd: 
		system("cls");
		printf("\n\n\n\n");	
		printf("      ---------------------------------------------------------\n");
		printf("     |                   Features of Room                      |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t\t1.Presidential Suitet");
		printf("\n\t\t2.Executive Room");
		printf("\n\t\t3.Main menu\n");
		printf("\n       --------------------------------------------------------\n");
		printf("\n\tSelect the type: ");
		scanf("%d",&d);
		if(d==1)
		{
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                   For Your Comfort                      |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.Two oversized bedrooms with king-sized beds\n\t2.Pillow menu\n\t3.Separate living and dining areas\n\t4.Fully equipped kitchen and guest powder room \n\t4.Executive writing table and stationery set \n\t5.Touch switch light dimmer \n\t6.Two ensuite bathrooms with separate rain shower \n\tstall and bathtub \n\t7.Jacuzzi and steamist\n\t8.Rain and Massage shower\n\t9.Walk-in wardrobe\n\t10.Bathrobe, slippers and hairdryer");
		printf("\n\n       --------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                 For Your Convenience                    |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.Wired and wireless high-speed Internet access\n\t2.Spare electrical outlet and power adapter\n\t3.IDD telephone and voice mail\n\t4.Complimentary local phone calls\n\t5.Secure key-card access\n\t6.Personal digital safe\n\t6.Iron and ironing board\n\t7.24-hour in-room dining\n\t8.Butler and daily turn-down service");
		printf("\n\n       ---------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                 For Your Indulgence                     |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.65? SMART Television Internet Protocol television \n\t  with local and cable channels in the living area\n\t2.55LCD television in the bedroom\n\t3.Multimedia hub with DVD player\n\t4.Fully-stocked minibar\n\t5.Coffee and tea making facilities\n\t6.Complimentary bottled water\n\t7.Daily newspaper");
		printf("\n\n       --------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		int cd;
		goto cd;
		}
		else if(d==2)
		{
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                   For Your Comfort                      |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.A choice of king-sized or twin beds\n\t2.Pillow menu\n\t3.Executive writing table and stationery set\n\t4.Ensuite bathroom with separate rain shower stall and \n\t  bathtub\n\t5.Bathrobe, slippers and hairdryer");
		printf("\n\n       --------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                 For Your Convenience                    |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.Wired and wireless high-speed Internet access\n\t2.Spare electrical outlet and power adapter\n\t3.IDD telephone and voice mail\n\t4.Complimentary local phone calls\n\t5.Secure key-card access\n\t6.Personal digital safe\n\t7.Iron and ironing board\n\t7.24-hour in-room dining\n\t8.Butler and daily turn-down service");
		printf("\n\n       ---------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		system("cls");
		printf("\n\n\n\n");
		printf("      ---------------------------------------------------------\n");
		printf("     |                 For Your Indulgence                     |\n");
		printf("      ---------------------------------------------------------\n");
		printf("\n\t1.32? LCD interactive television with local and cable \n\t  channels\n\t2.DVD player\n\t3.Fully-stocked minibar\n\t4.Coffee and tea making facilities\n\t5.Complimentary bottled water\n\t6.Daily newspaper");
		printf("\n\n       --------------------------------------------------------\n");
		printf("\n\n");
		system("pause");
		int cd;
		goto cd;
		}
		else
		{
		system("cls");	
		goto c;
		}
		break;
	
		case 3:                                                         
		ab:
		system("cls");
		printf("\n\n\n\n");
		printf("\t ------------------------------------------------------\n");
		printf("\t|                   Room Allocation                    |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n\t\tTypes of room\n");
		printf("\n\t\t1.Presidential Suitet");
		printf("\n\t\t2.Executive Room");
		printf("\n\t\t3.Main menu\n");
		printf("\n         ------------------------------------------------------\n");
		printf("\n\t\tEnter the category you want to select: ");
		scanf("%d",&d);
		if(d==1)
		{system("cls");
		printf("\n\n\n\n");
		za=za-1;
		printf("\t ------------------------------------------------------\n");
		printf("\t|                 Presidential Suitet                  |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n");
		printf("\n\t\tPer day charges 9,800\n");
		printf("\n\t\tEnter the room no: ");
		int z;
		scanf("%d",&z);
		room[z-1].cnt=1;
		room[z-1].prc=9800;
		printf("\n\t\tEnter Name:           ");
		gets(room[z-1].name);
		gets(room[z-1].name);
		printf("\n\t\tEnter Nationality:    ");
		gets(room[z-1].nat);
		printf("\n\t\tHow many days you\n\t          want to stay:       ");
		scanf("%d",& room[z-1].day);
		printf("\n\t\tDate:\n\t\tFrom :      ");
		gets(room[z-1].from);
		gets(room[z-1].from);
		printf("\n\t\tTo:         ");
		gets(room[z-1].to);
		room[z-1].prc=9800*room[z-1].day;
		printf("\n         ------------------------------------------------------\n");
		system("pause");
		system("cls");
		goto c;
		}
		else if(d==2)
		{system("cls");
		printf("\n\n\n\n");
		zb=zb-1;
		printf("\t ------------------------------------------------------\n");
		printf("\t|                  Executive Room                      |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n");
		printf("\n\t\tPer day charges 6,500\n");
		printf("\n\t\tEnter the room no: ");
		int z;
		scanf("%d",&z);
		room[z-1].cnt=1;
		printf("\n\t\tEnter Name:           ");
		gets(room[z-1].name);
		gets(room[z-1].name);
		printf("\n\t\tEnter Nationality:    ");
		gets(room[z-1].nat);
		printf("\n\t\tHow many days you\n\t          want to stay:       ");
		scanf("%d",& room[z-1].day);
		printf("\n\t\tDate:\n\t\tFrom :      ");
		gets(room[z-1].from);
		gets(room[z-1].from);
		printf("\n\t\tTo:         ");
		gets(room[z-1].to);
		room[z-1].prc=6500*room[z-1].day;
		printf("\n         ------------------------------------------------------\n");
		system("pause"); 
		system("cls");
		goto c;
		}
		else
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 4:                                                        
	
		system("cls");
		printf("\n\n\n\n");	
		printf("\t ------------------------------------------------------\n");
		printf("\t|                   Customer Details                   |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n");
		printf("\n\t\tEnter the room no: ");
		int z;
		scanf("%d",&z);
		printf("\n\t\tName:           %s",room[z-1].name);
		printf("\n\t\tNationality:    %s",room[z-1].nat);
		printf("\n\t\tStay for %d days",room[z-1].day);
		printf("\n\t\tDate:");
		printf("\n\t\tFrom: %s",room[z-1].from);
		printf("\n\t\tTo:   %s",room[z-1].to);
		printf("\n\t\tTotal price: %d",room[z-1].prc);
		printf("\n\n       ---------------------------------------------------------\n");
		printf("\n\tPress 1 for main menu: ");
		scanf("%d",&d);
		if(d==1)
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 5:  
		as:
		system("cls");
		printf("\n\n\n\n");	
		printf("\t ------------------------------------------------------\n");
		printf("\t|                     Restaurant                       |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n\t      Items\t   |\t  Price");
		printf("\n\n\t    1.Chowmin\t  \t  Rs: 655");
		printf("\n\t    2.Mexican Rice\t  Rs: 385");
		printf("\n\t    3.Mali Boti\t   \t  Rs: 425");
		printf("\n\t    4.ColdDrink\t\t  Rs: 65");
		printf("\n\t    5.Pudding\t  \t  Rs: 425");
		printf("\n\t    6.Exit");
		printf("\n\n        --------------------------------------------------------\n");
		printf("\n\tSelect the catagory: ");
		scanf("%d",&d);
		if(d==1)
		{
			printf("\n\tChowmin  \t  Rs: 655");
			printf("\n\tEnter Room No: ");
			scanf("%d",&d);
			room[d-1].prc=room[d-1].prc+655;
			int as;
			goto as;
		}
		else if(d==2)
		{
			printf("\n\tMexican Rice\t  Rs: 385");
			printf("\n\tEnter Room No: ");
			scanf("%d",&d);
			room[d-1].prc=room[d-1].prc+385;
			goto as;
		}
		else if(d==3)
		{
			printf("\n\tMali Boti   \t  Rs: 425");
			printf("\n\tEnter Room No: ");
			scanf("%d",&d);
			room[d-1].prc=room[d-1].prc+425;
			goto as;
		}
		else if(d==4)
		{
			printf("\n\tColdDrink         Rs: 65");
			printf("\n\tEnter Room No: ");
			scanf("%d",&d);
			room[d-1].prc=room[d-1].prc+65;
			goto as;
		}
		else if(d==5)
		{
			printf("\n\tPudding  \t  Rs: 425");
			printf("\n\tEnter Room No: ");
			scanf("%d",&d);
			room[d-1].prc=room[d-1].prc+425;
			goto as;
		}
		else
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 6:                                                                 
		
		system("cls");
		printf("\n\n\n\n");	
		printf("\t ------------------------------------------------------\n");
		printf("\t|                     Cancellation                     |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n");
		printf("\n\t\tEnter the room no: ");
		scanf("%d",&z);
		printf("\n\t\tName:           %s",strcpy(room[z-1].name,b));
		printf("\n\t\tNationality:    %s",strcpy(room[z-1].nat,b));
		printf("\n\t\tStay for %d days",room[z-1].day=0);
		printf("\n\t\tDate:");
		printf("\n\t\tFrom: %s",strcpy(room[z-1].from,b));
		printf("\n\t\tTo:   %s",strcpy(room[z-1].to,b));
		printf("\n\t\tTotal price: %d",room[z-1].prc*0);
		room[z-1].cnt=0;
		printf("\n       ---------------------------------------------------------\n");
		printf("\n\tPress 1 for main menu: ");
		scanf("%d",&d);
		if(d==1)
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 7:                                                                   
		
		system("cls");
		printf("\n\n\n\n");	
		printf("\t ------------------------------------------------------\n");
		printf("\t|                   Room Deallocation                  |\n");
		printf("\t ------------------------------------------------------\n");
		printf("\n");
		printf("\n\t\tEnter the room no: ");
		scanf("%d",&z);
		printf("\n\t\tName:           %s",room[z-1].name);
		printf("\n\t\tNationality:    %s",room[z-1].nat);
		printf("\n\t\tStay for %d days",room[z-1].day);
		printf("\n\t\tDate:");
		printf("\n\t\tFrom: %s",room[z-1].from);
		printf("\n\t\tTo:   %s",room[z-1].to);
		printf("\n\t\tTotal price: %d",room[z-1].prc);
		printf("\n\t\tThanks for staying here");
		printf("\n\n         ------------------------------------------------------\n");
		strcpy(room[z-1].name,b);
		strcpy(room[z-1].nat,b);
		room[z-1].day=0;
		strcpy(room[z-1].from,b);
		strcpy(room[z-1].to,b);
		room[z-1].prc=0;
		room[z-1].cnt=0;
		printf("\n\n\tPress 1 for main menu: ");
		scanf("%d",&d);
		if(d==1)
		{
		system("cls");	
		goto c;
		}
		break;
		
		case 8:                                                                   
			
		return 0;
		break;
	}
	
}
