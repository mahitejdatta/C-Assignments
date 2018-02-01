#include<stdio.h>
void main()
{
	char choice;
	do
	{
		int no_of_days,day,i;			// Initialization
		printf("Enter the nth day\n");
		scanf("%d",&no_of_days);		// Reads the day to be printed
		printf("Choose the first day\n0.Sunday\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n6.Saturday\n");
		scanf("%d",&day);			//Reads the first day
		for(i=1;i<no_of_days;i++)		//Loop to find the nth day
		{
			if(day==6)
				day=0;
			else if(day>=0 || day <6)
				day++;
		}
		switch (day)                            // case to print the day
		{
			case 0:
			     printf("Sunday\n");
			     break;
			case 1:
			     printf("Monday\n");
			     break;
			case 2:
			     printf("Tuesday\n");
			     break;
			case 3:
			     printf("Wednesday\n");
			     break;
			case 4:
			     printf("Thursday\n");
			     break;
			case 5:
			     printf("Friday\n");
			     break;
			case 6:
			     printf("Saturday\n");
			     break;
		
		}
		printf("Do you want to continue[y/n]:\n");
		scanf(" %c",&choice);
	}while(choice == 'y');
}
