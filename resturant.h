#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void resturant(void)
{
	system("cls");
	int choice1;
	
	printf("\n\t\t\tWELCOME TO SSF RESTURANT\n");
	printf("\n\n~THERE ARE ALL KIND OF FOODS:\n\n");
	printf("\n1.FAST FOOD RESTURANT\n2.DESI FOOD RESTURANT\n3.CHINESE FOOD RESTURANT\n4.DESERT\n5.EXIT\n\n\n~ENTER YOUR CHOICE:");
    scanf("%d",&choice1);
    system("cls");
    printf("PRESS ANY KEY TO CONTINUE....");
    getch();

    switch(choice1)
	{
    	case 1:
    		{
    	    system("cls");
    		printf("\n\t\t~WELCOME TO FAST FOOD RESTURANT\n\n\n");
    		int choice;
    		int price;
    		
    		printf("1.QTR BROAST \t\t Rs-200/-\n2.HALF BROAST \t\t Rs-400/-\n3.ZINGER BURGER \t Rs-190/-\n4.CHICKEN BURGER \t Rs-160/-\n5.CLUB SANDWICH \t Rs-230/-\n6.BBQ CLUB SANDWICH \t Rs-250/-\n\n~ENTER YOUR CHOICE=");
    		scanf("%d",&choice);
    	
    	    switch(choice)
    	    {
			
    		case 1:
			{
    			int qty;
    			int rate=200;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
    		}
			break;
			
			case 2:
			{
    			int qty;
    			int rate=400;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty;
    			int rate=190;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty;
    			int rate=160;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty;
    			int rate=230;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty;
    			int rate=250;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			default:
			{
				printf("INVALID CHOICE....");
			}
				break;
		}
  }
		break;
			
		case 2:
		{
			system("cls");
				printf("\n\t\t~WELCOME TO DESI FOOD RESTURANT\n\n\n");
    		int choice,price;
    		printf("1.CHICKEN KARAHI \t Rs-800/-\n2.MUTTON KARAHI \t Rs-1200/-\n3.BEAF KARAHI \t Rs-1000/-\n4.CHICKEN KORMA \t Rs-760/-\n5.CHICKEN TIKKA \t Rs-230/-\n6.CHARGHA \t Rs-950/-\n\n~ENTER YOUR CHOICE=");
    		scanf("%d",&choice);
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty;
    			int rate=800;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty;
    			int rate=1200;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
		    case 3:
			{
    			int qty;
    			int rate=1000;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty;
    			int rate=760;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty;
    			int rate=230;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}		
			}
			break;
			
			case 6:
			{
    			int qty;
    			int rate=950;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
					
			default:
				{
					printf("INVALID CHOICE....");
				}
				break;
    }

}
			break;
		
		case 3:
		{
			system("cls");
				printf("\n\t\t~WELCOME TO CHINESE FOOD RESTURANT\n\n\n");
    		int choice;
    		printf("1.BBQ SHASHLIK \t Rs-400/-\n2.CHICKEN SHASHLIK \t Rs-350/-\n3.CHICKEN MANCHUREIN \t Rs-360/-\n4.CHICKEN CHILLI \t Rs-360/-\n5.CHICKEN JALFREZI \t Rs-430/-\n6.CHICKEN PASTA \t Rs-250/-\n\n~ENTER YOUR CHOICE=");
    		scanf("%d",&choice);
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty,price;
    			int rate=400;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");//CHOICE FOR MORE OR NOT
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty,price;
    			int rate=350;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("\tSimply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty,price;
    			int rate=360;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("\tSimply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty,price;
    			int rate=360;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty,price;
    			int rate=430;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty,price;
    			int rate=250;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\tTHANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("\tSimply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			default:
				{
					printf("INVALID CHOICE....");
				}
	}
}
		break;
		
		case 4:
		{
			system("cls");
			printf("\n\t\t~WELCOME TO DESERT WORLD RESTURANT\n\n\n");
    		int choice;
    		printf("1.KHEER \t Rs-200/-\n2.ICECREAM \t Rs-400/-\n3.FALOODA \t Rs-190/-\n4.KULFI \t Rs-160/-\n5.GOLA GANDA \t Rs-230/-\n6.ICE COFFEE \t Rs-250/-\n\n~ENTER YOUR CHOICE=");
    		scanf("%d",&choice);
    		
    		switch(choice)
    		{
			
    		case 1:
			{
    			int qty,price;
    			int rate=200;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 2:
			{
    			int qty,price;
    			int rate=400;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 3:
			{
    			int qty,price;
    			int rate=190;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
			
			    int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 4:
			{
    			int qty,price;
    			int rate=160;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 5:
			{
    			int qty,price;
    			int rate=230;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("/n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			case 6:
			{
    			int qty,price;
    			int rate=250;
    			printf("\n~ENTER QUANTITY=");
    			scanf("%d",&qty);
    			price=qty*rate;
    			printf("\n~PRICE=Rs-%d/-\n",price);
    			
    			int x;
    			printf("DO YOU WONT TO HAVE MORE(1/0):");
    			scanf("%d",&x);
    			
    			if(x==1)
    			{
    				resturant();
				}
				else
				{
					system("cls");
					printf("TOTAL BILL=Rs-%d",price=price+rate*qty);//PRINTING THE UPDATED PRICE//
					printf("\n\t THANK YOU.\n");
					printf("\tYour next meal could be on us!\n");
					printf("Simply tell us how you fell at SSF HOTEL\n");
					printf("\tssfhotel@nu.edu.pk\n\n");
					printf("\nPRESS ANY KEY TO CONTINUE...");
					getch();
					main_menu();
				}
			}
			break;
			
			default:
				{
					printf("INVALID CHOICE....");
				}
				break;
		}
        }
		break;
		
		case 5:
		{
			main_menu();	//BACK TO MAIN MENU
		}
		break;
		
		default: //FOR INVALID CHOICE//
		{
			system("cls");
			printf("INVALID CHOICE....");
			printf("Chose 1-4\n");
			getch();
			system("cls");
			resturant(); 
		 } 
	}
}
